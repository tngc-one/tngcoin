/********************************************************************************
** Form generated from reading UI file 'createwalletdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWALLETDIALOG_H
#define UI_CREATEWALLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateWalletDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *wallet_name_label;
    QLineEdit *wallet_name_line_edit;
    QCheckBox *encrypt_wallet_checkbox;
    QSpacerItem *verticalSpacer_1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_groupbox;
    QCheckBox *disable_privkeys_checkbox;
    QCheckBox *blank_wallet_checkbox;
    QCheckBox *descriptor_checkbox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateWalletDialog)
    {
        if (CreateWalletDialog->objectName().isEmpty())
            CreateWalletDialog->setObjectName(QStringLiteral("CreateWalletDialog"));
        CreateWalletDialog->resize(364, 249);
        CreateWalletDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(CreateWalletDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        wallet_name_label = new QLabel(CreateWalletDialog);
        wallet_name_label->setObjectName(QStringLiteral("wallet_name_label"));

        horizontalLayout->addWidget(wallet_name_label);

        wallet_name_line_edit = new QLineEdit(CreateWalletDialog);
        wallet_name_line_edit->setObjectName(QStringLiteral("wallet_name_line_edit"));
        wallet_name_line_edit->setMinimumSize(QSize(262, 0));

        horizontalLayout->addWidget(wallet_name_line_edit);


        verticalLayout->addLayout(horizontalLayout);

        encrypt_wallet_checkbox = new QCheckBox(CreateWalletDialog);
        encrypt_wallet_checkbox->setObjectName(QStringLiteral("encrypt_wallet_checkbox"));
        encrypt_wallet_checkbox->setChecked(false);

        verticalLayout->addWidget(encrypt_wallet_checkbox);

        verticalSpacer_1 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_1);

        groupBox = new QGroupBox(CreateWalletDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_groupbox = new QVBoxLayout(groupBox);
        verticalLayout_groupbox->setObjectName(QStringLiteral("verticalLayout_groupbox"));
        disable_privkeys_checkbox = new QCheckBox(groupBox);
        disable_privkeys_checkbox->setObjectName(QStringLiteral("disable_privkeys_checkbox"));
        disable_privkeys_checkbox->setEnabled(true);

        verticalLayout_groupbox->addWidget(disable_privkeys_checkbox);

        blank_wallet_checkbox = new QCheckBox(groupBox);
        blank_wallet_checkbox->setObjectName(QStringLiteral("blank_wallet_checkbox"));

        verticalLayout_groupbox->addWidget(blank_wallet_checkbox);

        descriptor_checkbox = new QCheckBox(groupBox);
        descriptor_checkbox->setObjectName(QStringLiteral("descriptor_checkbox"));

        verticalLayout_groupbox->addWidget(descriptor_checkbox);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(CreateWalletDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(wallet_name_line_edit, encrypt_wallet_checkbox);
        QWidget::setTabOrder(encrypt_wallet_checkbox, disable_privkeys_checkbox);
        QWidget::setTabOrder(disable_privkeys_checkbox, blank_wallet_checkbox);
        QWidget::setTabOrder(blank_wallet_checkbox, descriptor_checkbox);

        retranslateUi(CreateWalletDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateWalletDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateWalletDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateWalletDialog)
    {
        CreateWalletDialog->setWindowTitle(QApplication::translate("CreateWalletDialog", "Create Wallet", 0));
        wallet_name_label->setText(QApplication::translate("CreateWalletDialog", "Wallet Name", 0));
        wallet_name_line_edit->setPlaceholderText(QApplication::translate("CreateWalletDialog", "Wallet", 0));
#ifndef QT_NO_TOOLTIP
        encrypt_wallet_checkbox->setToolTip(QApplication::translate("CreateWalletDialog", "Encrypt the wallet. The wallet will be encrypted with a passphrase of your choice.", 0));
#endif // QT_NO_TOOLTIP
        encrypt_wallet_checkbox->setText(QApplication::translate("CreateWalletDialog", "Encrypt Wallet", 0));
        groupBox->setTitle(QApplication::translate("CreateWalletDialog", "Advanced Options", 0));
#ifndef QT_NO_TOOLTIP
        disable_privkeys_checkbox->setToolTip(QApplication::translate("CreateWalletDialog", "Disable private keys for this wallet. Wallets with private keys disabled will have no private keys and cannot have an HD seed or imported private keys. This is ideal for watch-only wallets.", 0));
#endif // QT_NO_TOOLTIP
        disable_privkeys_checkbox->setText(QApplication::translate("CreateWalletDialog", "Disable Private Keys", 0));
#ifndef QT_NO_TOOLTIP
        blank_wallet_checkbox->setToolTip(QApplication::translate("CreateWalletDialog", "Make a blank wallet. Blank wallets do not initially have private keys or scripts. Private keys and addresses can be imported, or an HD seed can be set, at a later time.", 0));
#endif // QT_NO_TOOLTIP
        blank_wallet_checkbox->setText(QApplication::translate("CreateWalletDialog", "Make Blank Wallet", 0));
#ifndef QT_NO_TOOLTIP
        descriptor_checkbox->setToolTip(QApplication::translate("CreateWalletDialog", "Use descriptors for scriptPubKey management", 0));
#endif // QT_NO_TOOLTIP
        descriptor_checkbox->setText(QApplication::translate("CreateWalletDialog", "Descriptor Wallet", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateWalletDialog: public Ui_CreateWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWALLETDIALOG_H
