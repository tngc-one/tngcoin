// Copyright (c) 2020 The TrustNetworkGlobalCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TRUSTNETWORKGLOBALCOIN_TEST_UTIL_VALIDATION_H
#define TRUSTNETWORKGLOBALCOIN_TEST_UTIL_VALIDATION_H

#include <validation.h>

struct TestChainState : public CChainState {
    /** Reset the ibd cache to its initial state */
    void ResetIbd();
    /** Toggle IsInitialBlockDownload from true to false */
    void JumpOutOfIbd();
};

#endif // TRUSTNETWORKGLOBALCOIN_TEST_UTIL_VALIDATION_H
