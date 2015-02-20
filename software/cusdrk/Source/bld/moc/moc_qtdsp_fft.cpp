/****************************************************************************
** Meta object code from reading C++ file 'qtdsp_fft.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtDSP/qtdsp_fft.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtdsp_fft.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFFT_t {
    QByteArrayData data[13];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFFT_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFFT_t qt_meta_stringdata_QFFT = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 13),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 4),
QT_MOC_LITERAL(4, 25, 2),
QT_MOC_LITERAL(5, 28, 3),
QT_MOC_LITERAL(6, 32, 4),
QT_MOC_LITERAL(7, 37, 13),
QT_MOC_LITERAL(8, 51, 17),
QT_MOC_LITERAL(9, 69, 8),
QT_MOC_LITERAL(10, 78, 10),
QT_MOC_LITERAL(11, 89, 6),
QT_MOC_LITERAL(12, 96, 3)
    },
    "QFFT\0DoFFTWForward\0\0CPX&\0in\0out\0size\0"
    "DoFFTWInverse\0DoFFTWMagnForward\0"
    "baseline\0correction\0float*\0fbr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFFT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       7,    3,   36,    2, 0x0a /* Public */,
       8,    5,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Float, QMetaType::Float, 0x80000000 | 11,    4,    6,    9,   10,   12,

       0        // eod
};

void QFFT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFFT *_t = static_cast<QFFT *>(_o);
        switch (_id) {
        case 0: _t->DoFFTWForward((*reinterpret_cast< CPX(*)>(_a[1])),(*reinterpret_cast< CPX(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->DoFFTWInverse((*reinterpret_cast< CPX(*)>(_a[1])),(*reinterpret_cast< CPX(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->DoFFTWMagnForward((*reinterpret_cast< CPX(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float*(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject QFFT::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFFT.data,
      qt_meta_data_QFFT,  qt_static_metacall, 0, 0}
};


const QMetaObject *QFFT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFFT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFFT.stringdata))
        return static_cast<void*>(const_cast< QFFT*>(this));
    return QObject::qt_metacast(_clname);
}

int QFFT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
