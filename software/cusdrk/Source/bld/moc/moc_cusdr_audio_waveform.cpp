/****************************************************************************
** Meta object code from reading C++ file 'cusdr_audio_waveform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AudioEngine/cusdr_audio_waveform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_audio_waveform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Waveform_t {
    QByteArrayData data[13];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Waveform_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Waveform_t qt_meta_stringdata_Waveform = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 20),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 13),
QT_MOC_LITERAL(5, 51, 6),
QT_MOC_LITERAL(6, 58, 8),
QT_MOC_LITERAL(7, 67, 6),
QT_MOC_LITERAL(8, 74, 6),
QT_MOC_LITERAL(9, 81, 20),
QT_MOC_LITERAL(10, 102, 19),
QT_MOC_LITERAL(11, 122, 7),
QT_MOC_LITERAL(12, 130, 4)
    },
    "Waveform\0waveformImageChanged\0\0value\0"
    "bufferChanged\0sender\0position\0length\0"
    "buffer\0audioPositionChanged\0"
    "createWaveformImage\0QImage*\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Waveform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    4,   37,    2, 0x0a /* Public */,
       9,    2,   46,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::LongLong, QMetaType::LongLong, QMetaType::QByteArray,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::LongLong,    5,    6,
    0x80000000 | 11, QMetaType::QRect,   12,

       0        // eod
};

void Waveform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Waveform *_t = static_cast<Waveform *>(_o);
        switch (_id) {
        case 0: _t->waveformImageChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->bufferChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 2: _t->audioPositionChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: { QImage* _r = _t->createWaveformImage((*reinterpret_cast< const QRect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Waveform::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Waveform::waveformImageChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Waveform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Waveform.data,
      qt_meta_data_Waveform,  qt_static_metacall, 0, 0}
};


const QMetaObject *Waveform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Waveform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Waveform.stringdata))
        return static_cast<void*>(const_cast< Waveform*>(this));
    return QObject::qt_metacast(_clname);
}

int Waveform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Waveform::waveformImageChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
