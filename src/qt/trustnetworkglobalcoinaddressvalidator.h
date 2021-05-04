// Copyright (c) 2011-2014 The TrustNetworkGlobalCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TRUSTNETWORKGLOBALCOIN_QT_TRUSTNETWORKGLOBALCOINADDRESSVALIDATOR_H
#define TRUSTNETWORKGLOBALCOIN_QT_TRUSTNETWORKGLOBALCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TrustNetworkGlobalCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TrustNetworkGlobalCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** TrustNetworkGlobalCoin address widget validator, checks for a valid trustnetworkglobalcoin address.
 */
class TrustNetworkGlobalCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TrustNetworkGlobalCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // TRUSTNETWORKGLOBALCOIN_QT_TRUSTNETWORKGLOBALCOINADDRESSVALIDATOR_H
