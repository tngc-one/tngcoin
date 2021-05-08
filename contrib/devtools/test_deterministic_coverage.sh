#!/usr/bin/env bash
#
# Copyright (c) 2019-2020 The TNGC Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
#
# Test for deterministic coverage across unit test runs.

export LC_ALL=C

# Use GCOV_EXECUTABLE="gcov" if compiling with gcc.
# Use GCOV_EXECUTABLE="llvm-cov gcov" if compiling with clang.
GCOV_EXECUTABLE="gcov"

# Disable tests known to cause non-deterministic behaviour and document the source or point of non-determinism.
NON_DETERMINISTIC_TESTS=(
    "blockfilter_index_tests/blockfilter_index_initial_sync"  # src/checkqueue.h: In CCheckQueue::Loop(): while (queue.empty()) { ... }
    "coinselector_tests/knapsack_solver_test"                 # coinselector_tests.cpp: if (equal_sets(setCoinsRet, setCoinsRet2))
    "fs_tests/fsbridge_fstream"                               # deterministic test failure?
    "miner_tests/CreateNewBlock_validity"                     # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "scheduler_tests/manythreads"                             # scheduler.cpp: CScheduler::serviceQueue()
    "scheduler_tests/singlethreadedscheduler_ordered"         # scheduler.cpp: CScheduler::serviceQueue()
    "txvalidationcache_tests/checkinputs_test"                # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "txvalidationcache_tests/tx_mempool_block_doublespend"    # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "txindex_tests/txindex_initial_sync"                      # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "txvalidation_tests/tx_mempool_reject_coinbase"           # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "validation_block_tests/processnewblock_signals_ordering" # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/coin_mark_dirty_immature_credit"            # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/dummy_input_size_test"                      # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/importmulti_rescan"                         # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/importwallet_rescan"                        # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/ListCoins"                                  # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/scan_for_wallet_transactions"               # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
    "wallet_tests/wallet_disableprivkeys"                     # validation.cpp: if (GetMainSignals().CallbacksPending() > 10)
)

TEST_TNGC_BINARY="src/test/test_tngc"

print_usage() {
    echo "Usage: $0 [custom test filter (default: all but known non-deterministic tests)] [number of test runs (default: 2)]"
}

N_TEST_RUNS=2
BOOST_TEST_RUN_FILTERS=""
if [[ $# != 0 ]]; then
    if [[ $1 == "--help" ]]; then
        print_usage
        exit
    fi
    PARSED_ARGUMENTS=0
    if [[ $1 =~ [a-z] ]]; then
        BOOST_TEST_RUN_FILTERS=$1
        PARSED_ARGUMENTS=$((PARSED_ARGUMENTS + 1))
        shift
    fi
    if [[ $1 =~ ^[0-9]+$ ]]; then
        N_TEST_RUNS=$1
        PARSED_ARGUMENTS=$((PARSED_ARGUMENTS + 1))
        shift
    fi
    if [[ ${PARSED_ARGUMENTS} == 0 || $# -gt 2 || ${N_TEST_RUNS} -lt 2 ]]; then
        print_usage
        exit
    fi
fi
if [[ ${BOOST_TEST_RUN_FILTERS} == "" ]]; then
    BOOST_TEST_RUN_FILTERS="$(IFS=":"; echo "!${NON_DETERMINISTIC_TESTS[*]}" | sed 's/:/:!/g')"
else
    echo "Using Boost test filter: ${BOOST_TEST_RUN_FILTERS}"
    echo
fi

if ! command -v gcov > /dev/null; then
    echo "Error: gcov not installed. Exiting."
    exit 1
fi

if ! command -v gcovr > /dev/null; then
    echo "Error: gcovr not installed. Exiting."
    exit 1
fi

if [[ ! -e ${TEST_TNGC_BINARY} ]]; then
    echo "Error: Executable ${TEST_TNGC_BINARY} not found. Run \"./configure --enable-lcov\" and compile."
    exit 1
fi

get_file_suffix_count() {
    find src/ -type f -name "*.$1" | wc -l
}

if [[ $(get_file_suffix_count gcno) == 0 ]]; then
    echo "Error: Could not find any *.gcno files. The *.gcno files are generated by the compiler. Run \"./configure --enable-lcov\" and re-compile."
    exit 1
fi

get_covr_filename() {
    echo "gcovr.run-$1.txt"
}

TEST_RUN_ID=0
while [[ ${TEST_RUN_ID} -lt ${N_TEST_RUNS} ]]; do
    TEST_RUN_ID=$((TEST_RUN_ID + 1))
    echo "[$(date +"%Y-%m-%d %H:%M:%S")] Measuring coverage, run #${TEST_RUN_ID} of ${N_TEST_RUNS}"
    find src/ -type f -name "*.gcda" -exec rm {} \;
    if [[ $(get_file_suffix_count gcda) != 0 ]]; then
        echo "Error: Stale *.gcda files found. Exiting."
        exit 1
    fi
    TEST_OUTPUT_TEMPFILE=$(mktemp)
    if ! BOOST_TEST_RUN_FILTERS="${BOOST_TEST_RUN_FILTERS}" ${TEST_TNGC_BINARY} > "${TEST_OUTPUT_TEMPFILE}" 2>&1; then
        cat "${TEST_OUTPUT_TEMPFILE}"
        rm "${TEST_OUTPUT_TEMPFILE}"
        exit 1
    fi
    rm "${TEST_OUTPUT_TEMPFILE}"
    if [[ $(get_file_suffix_count gcda) == 0 ]]; then
        echo "Error: Running the test suite did not create any *.gcda files. The gcda files are generated when the instrumented test programs are executed. Run \"./configure --enable-lcov\" and re-compile."
        exit 1
    fi
    GCOVR_TEMPFILE=$(mktemp)
    if ! gcovr --gcov-executable "${GCOV_EXECUTABLE}" -r src/ > "${GCOVR_TEMPFILE}"; then
        echo "Error: gcovr failed. Output written to ${GCOVR_TEMPFILE}. Exiting."
        exit 1
    fi
    GCOVR_FILENAME=$(get_covr_filename ${TEST_RUN_ID})
    mv "${GCOVR_TEMPFILE}" "${GCOVR_FILENAME}"
    if grep -E "^TOTAL *0 *0 " "${GCOVR_FILENAME}"; then
        echo "Error: Spurious gcovr output. Make sure the correct GCOV_EXECUTABLE variable is set in $0 (\"gcov\" for gcc, \"llvm-cov gcov\" for clang)."
        exit 1
    fi
    if [[ ${TEST_RUN_ID} != 1 ]]; then
        COVERAGE_DIFF=$(diff -u "$(get_covr_filename 1)" "${GCOVR_FILENAME}")
        if [[ ${COVERAGE_DIFF} != "" ]]; then
            echo
            echo "The line coverage is non-deterministic between runs. Exiting."
            echo
            echo "The test suite must be deterministic in the sense that the set of lines executed at least"
            echo "once must be identical between runs. This is a necessary condition for meaningful"
            echo "coverage measuring."
            echo
            echo "${COVERAGE_DIFF}"
            exit 1
        fi
        rm "${GCOVR_FILENAME}"
    fi
done

echo
echo "Coverage test passed: Deterministic coverage across ${N_TEST_RUNS} runs."
exit
