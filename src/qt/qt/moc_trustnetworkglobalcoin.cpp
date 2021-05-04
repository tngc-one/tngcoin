/****************************************************************************
** Meta object code from reading C++ file 'trustnetworkglobalcoin.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/trustnetworkglobalcoin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trustnetworkglobalcoin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrustNetworkGlobalCoinCore_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrustNetworkGlobalCoinCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrustNetworkGlobalCoinCore_t qt_meta_stringdata_TrustNetworkGlobalCoinCore = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TrustNetworkGlobalCoinCore"
QT_MOC_LITERAL(1, 27, 16), // "initializeResult"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "success"
QT_MOC_LITERAL(4, 53, 33), // "interfaces::BlockAndHeaderTip..."
QT_MOC_LITERAL(5, 87, 8), // "tip_info"
QT_MOC_LITERAL(6, 96, 14), // "shutdownResult"
QT_MOC_LITERAL(7, 111, 16), // "runawayException"
QT_MOC_LITERAL(8, 128, 7), // "message"
QT_MOC_LITERAL(9, 136, 10), // "initialize"
QT_MOC_LITERAL(10, 147, 8) // "shutdown"

    },
    "TrustNetworkGlobalCoinCore\0initializeResult\0"
    "\0success\0interfaces::BlockAndHeaderTipInfo\0"
    "tip_info\0shutdownResult\0runawayException\0"
    "message\0initialize\0shutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrustNetworkGlobalCoinCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrustNetworkGlobalCoinCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrustNetworkGlobalCoinCore *_t = static_cast<TrustNetworkGlobalCoinCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initializeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< interfaces::BlockAndHeaderTipInfo(*)>(_a[2]))); break;
        case 1: _t->shutdownResult(); break;
        case 2: _t->runawayException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->initialize(); break;
        case 4: _t->shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrustNetworkGlobalCoinCore::*_t)(bool , interfaces::BlockAndHeaderTipInfo );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinCore::initializeResult)) {
                *result = 0;
            }
        }
        {
            typedef void (TrustNetworkGlobalCoinCore::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinCore::shutdownResult)) {
                *result = 1;
            }
        }
        {
            typedef void (TrustNetworkGlobalCoinCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinCore::runawayException)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TrustNetworkGlobalCoinCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TrustNetworkGlobalCoinCore.data,
      qt_meta_data_TrustNetworkGlobalCoinCore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrustNetworkGlobalCoinCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrustNetworkGlobalCoinCore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrustNetworkGlobalCoinCore.stringdata0))
        return static_cast<void*>(const_cast< TrustNetworkGlobalCoinCore*>(this));
    return QObject::qt_metacast(_clname);
}

int TrustNetworkGlobalCoinCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TrustNetworkGlobalCoinCore::initializeResult(bool _t1, interfaces::BlockAndHeaderTipInfo _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrustNetworkGlobalCoinCore::shutdownResult()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TrustNetworkGlobalCoinCore::runawayException(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_TrustNetworkGlobalCoinApplication_t {
    QByteArrayData data[15];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrustNetworkGlobalCoinApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrustNetworkGlobalCoinApplication_t qt_meta_stringdata_TrustNetworkGlobalCoinApplication = {
    {
QT_MOC_LITERAL(0, 0, 33), // "TrustNetworkGlobalCoinApplica..."
QT_MOC_LITERAL(1, 34, 19), // "requestedInitialize"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 17), // "requestedShutdown"
QT_MOC_LITERAL(4, 73, 14), // "splashFinished"
QT_MOC_LITERAL(5, 88, 11), // "windowShown"
QT_MOC_LITERAL(6, 100, 26), // "TrustNetworkGlobalCoinGUI*"
QT_MOC_LITERAL(7, 127, 6), // "window"
QT_MOC_LITERAL(8, 134, 16), // "initializeResult"
QT_MOC_LITERAL(9, 151, 7), // "success"
QT_MOC_LITERAL(10, 159, 33), // "interfaces::BlockAndHeaderTip..."
QT_MOC_LITERAL(11, 193, 8), // "tip_info"
QT_MOC_LITERAL(12, 202, 14), // "shutdownResult"
QT_MOC_LITERAL(13, 217, 22), // "handleRunawayException"
QT_MOC_LITERAL(14, 240, 7) // "message"

    },
    "TrustNetworkGlobalCoinApplication\0"
    "requestedInitialize\0\0requestedShutdown\0"
    "splashFinished\0windowShown\0"
    "TrustNetworkGlobalCoinGUI*\0window\0"
    "initializeResult\0success\0"
    "interfaces::BlockAndHeaderTipInfo\0"
    "tip_info\0shutdownResult\0handleRunawayException\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrustNetworkGlobalCoinApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   55,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void TrustNetworkGlobalCoinApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrustNetworkGlobalCoinApplication *_t = static_cast<TrustNetworkGlobalCoinApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestedInitialize(); break;
        case 1: _t->requestedShutdown(); break;
        case 2: _t->splashFinished(); break;
        case 3: _t->windowShown((*reinterpret_cast< TrustNetworkGlobalCoinGUI*(*)>(_a[1]))); break;
        case 4: _t->initializeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< interfaces::BlockAndHeaderTipInfo(*)>(_a[2]))); break;
        case 5: _t->shutdownResult(); break;
        case 6: _t->handleRunawayException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrustNetworkGlobalCoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinApplication::requestedInitialize)) {
                *result = 0;
            }
        }
        {
            typedef void (TrustNetworkGlobalCoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinApplication::requestedShutdown)) {
                *result = 1;
            }
        }
        {
            typedef void (TrustNetworkGlobalCoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinApplication::splashFinished)) {
                *result = 2;
            }
        }
        {
            typedef void (TrustNetworkGlobalCoinApplication::*_t)(TrustNetworkGlobalCoinGUI * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrustNetworkGlobalCoinApplication::windowShown)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject TrustNetworkGlobalCoinApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_TrustNetworkGlobalCoinApplication.data,
      qt_meta_data_TrustNetworkGlobalCoinApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrustNetworkGlobalCoinApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrustNetworkGlobalCoinApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrustNetworkGlobalCoinApplication.stringdata0))
        return static_cast<void*>(const_cast< TrustNetworkGlobalCoinApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int TrustNetworkGlobalCoinApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TrustNetworkGlobalCoinApplication::requestedInitialize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TrustNetworkGlobalCoinApplication::requestedShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TrustNetworkGlobalCoinApplication::splashFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TrustNetworkGlobalCoinApplication::windowShown(TrustNetworkGlobalCoinGUI * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
