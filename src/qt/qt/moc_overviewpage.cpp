/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[17];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(5, 63, 10), // "setBalance"
QT_MOC_LITERAL(6, 74, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(7, 101, 8), // "balances"
QT_MOC_LITERAL(8, 110, 10), // "setPrivacy"
QT_MOC_LITERAL(9, 121, 7), // "privacy"
QT_MOC_LITERAL(10, 129, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(11, 147, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(12, 172, 12), // "updateAlerts"
QT_MOC_LITERAL(13, 185, 8), // "warnings"
QT_MOC_LITERAL(14, 194, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(15, 216, 13), // "showWatchOnly"
QT_MOC_LITERAL(16, 230, 28) // "handleOutOfSyncWarningClicks"

    },
    "OverviewPage\0transactionClicked\0\0index\0"
    "outOfSyncWarningClicked\0setBalance\0"
    "interfaces::WalletBalances\0balances\0"
    "setPrivacy\0privacy\0updateDisplayUnit\0"
    "handleTransactionClicked\0updateAlerts\0"
    "warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0handleOutOfSyncWarningClicks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,
      14,    1,   76,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->outOfSyncWarningClicked(); break;
        case 2: _t->setBalance((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 3: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateDisplayUnit(); break;
        case 5: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->handleOutOfSyncWarningClicks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (OverviewPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::outOfSyncWarningClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
