// Copyright (c) 2011-2014 The TNGC Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TNGC_QT_TNGCADDRESSVALIDATOR_H
#define TNGC_QT_TNGCADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TNGCAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TNGCAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** TNGC address widget validator, checks for a valid tngc address.
 */
class TNGCAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TNGCAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // TNGC_QT_TNGCADDRESSVALIDATOR_H
