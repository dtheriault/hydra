/****************************************************************************
** Meta object code from reading C++ file 'qtdsp_dspEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtDSP/qtdsp_dspEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtdsp_dspEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDSPEngine_t {
    QByteArrayData data[22];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDSPEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDSPEngine_t qt_meta_stringdata_QDSPEngine = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 15),
QT_MOC_LITERAL(4, 43, 2),
QT_MOC_LITERAL(5, 46, 5),
QT_MOC_LITERAL(6, 52, 13),
QT_MOC_LITERAL(7, 66, 6),
QT_MOC_LITERAL(8, 73, 13),
QT_MOC_LITERAL(9, 87, 4),
QT_MOC_LITERAL(10, 92, 14),
QT_MOC_LITERAL(11, 107, 9),
QT_MOC_LITERAL(12, 117, 10),
QT_MOC_LITERAL(13, 128, 7),
QT_MOC_LITERAL(14, 136, 4),
QT_MOC_LITERAL(15, 141, 10),
QT_MOC_LITERAL(16, 152, 7),
QT_MOC_LITERAL(17, 160, 17),
QT_MOC_LITERAL(18, 178, 19),
QT_MOC_LITERAL(19, 198, 16),
QT_MOC_LITERAL(20, 215, 6),
QT_MOC_LITERAL(21, 222, 4)
    },
    "QDSPEngine\0getQtDSPStatus\0\0setNCOFrequency\0"
    "rx\0value\0setSampleRate\0sender\0"
    "setSampleSize\0size\0setQtDSPStatus\0"
    "setVolume\0setDSPMode\0DSPMode\0mode\0"
    "setAGCMode\0AGCMode\0setAGCMaximumGain\0"
    "setAGCHangThreshold\0setAGCLineValues\0"
    "thresh\0hang"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDSPEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    2,   70,    2, 0x0a /* Public */,
       6,    2,   75,    2, 0x0a /* Public */,
       8,    2,   80,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      15,    1,   94,    2, 0x0a /* Public */,
      17,    1,   97,    2, 0x08 /* Private */,
      18,    1,  100,    2, 0x08 /* Private */,
      19,    4,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::Long,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    7,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    9,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, QMetaType::QReal, QMetaType::QReal,    7,    4,   20,   21,

       0        // eod
};

void QDSPEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDSPEngine *_t = static_cast<QDSPEngine *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->getQtDSPStatus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->setNCOFrequency((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 2: _t->setSampleRate((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setSampleSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setQtDSPStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setDSPMode((*reinterpret_cast< DSPMode(*)>(_a[1]))); break;
        case 7: _t->setAGCMode((*reinterpret_cast< AGCMode(*)>(_a[1]))); break;
        case 8: _t->setAGCMaximumGain((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setAGCHangThreshold((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->setAGCLineValues((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DSPMode >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGCMode >(); break;
            }
            break;
        }
    }
}

const QMetaObject QDSPEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDSPEngine.data,
      qt_meta_data_QDSPEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *QDSPEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDSPEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDSPEngine.stringdata))
        return static_cast<void*>(const_cast< QDSPEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QDSPEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
