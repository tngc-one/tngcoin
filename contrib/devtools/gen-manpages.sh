#!/usr/bin/env bash
# Copyright (c) 2016-2019 The TNGC Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C
TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

TNGCD=${TNGCD:-$BINDIR/tngcd}
TNGCCLI=${TNGCCLI:-$BINDIR/tngc-cli}
TNGCTX=${TNGCTX:-$BINDIR/tngc-tx}
WALLET_TOOL=${WALLET_TOOL:-$BINDIR/tngc-wallet}
TNGCQT=${TNGCQT:-$BINDIR/qt/tngc-qt}

[ ! -x $TNGCD ] && echo "$TNGCD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
read -r -a TNGCVER <<< "$($TNGCCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }')"

# Create a footer file with copyright content.
# This gets autodetected fine for tngcd if --version-string is not set,
# but has different outcomes for tngc-qt and tngc-cli.
echo "[COPYRIGHT]" > footer.h2m
$TNGCD --version | sed -n '1!p' >> footer.h2m

for cmd in $TNGCD $TNGCCLI $TNGCTX $WALLET_TOOL $TNGCQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${TNGCVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${TNGCVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
