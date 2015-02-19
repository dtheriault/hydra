/****************************************************************************
** Meta object code from reading C++ file 'cusdr_audioReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DataEngine/cusdr_audioReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_audioReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AudioReceiver_t {
    QByteArrayData data[18];
    char stringdata[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioReceiver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioReceiver_t qt_meta_stringdata_AudioReceiver = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 7),
QT_MOC_LITERAL(4, 36, 11),
QT_MOC_LITERAL(5, 48, 6),
QT_MOC_LITERAL(6, 55, 5),
QT_MOC_LITERAL(7, 61, 17),
QT_MOC_LITERAL(8, 79, 14),
QT_MOC_LITERAL(9, 94, 9),
QT_MOC_LITERAL(10, 104, 20),
QT_MOC_LITERAL(11, 125, 7),
QT_MOC_LITERAL(12, 133, 12),
QT_MOC_LITERAL(13, 146, 10),
QT_MOC_LITERAL(14, 157, 27),
QT_MOC_LITERAL(15, 185, 28),
QT_MOC_LITERAL(16, 214, 5),
QT_MOC_LITERAL(17, 220, 24)
    },
    "AudioReceiver\0messageEvent\0\0message\0"
    "rcveIQEvent\0sender\0value\0outputBufferEvent\0"
    "unsigned char*\0outbuffer\0clientConnectedEvent\0"
    "newData\0newAudioData\0initClient\0"
    "displayAudioRcvrSocketError\0"
    "QAbstractSocket::SocketError\0error\0"
    "readPendingAudioRcvrData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       7,    1,   67,    2, 0x06 /* Public */,
      10,    1,   70,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,
      12,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   75,    2, 0x0a /* Public */,
      14,    1,   76,    2, 0x08 /* Private */,
      17,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void AudioReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioReceiver *_t = static_cast<AudioReceiver *>(_o);
        switch (_id) {
        case 0: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->rcveIQEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->outputBufferEvent((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 3: _t->clientConnectedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->newData(); break;
        case 5: _t->newAudioData(); break;
        case 6: _t->initClient(); break;
        case 7: _t->displayAudioRcvrSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->readPendingAudioRcvrData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AudioReceiver::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::messageEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (AudioReceiver::*_t)(QObject * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::rcveIQEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (AudioReceiver::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::outputBufferEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (AudioReceiver::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::clientConnectedEvent)) {
                *result = 3;
            }
        }
        {
            typedef void (AudioReceiver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::newData)) {
                *result = 4;
            }
        }
        {
            typedef void (AudioReceiver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioReceiver::newAudioData)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject AudioReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioReceiver.data,
      qt_meta_data_AudioReceiver,  qt_static_metacall, 0, 0}
};


const QMetaObject *AudioReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AudioReceiver.stringdata))
        return static_cast<void*>(const_cast< AudioReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int AudioReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AudioReceiver::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioReceiver::rcveIQEvent(QObject * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioReceiver::outputBufferEvent(unsigned char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioReceiver::clientConnectedEvent(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AudioReceiver::newData()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void AudioReceiver::newAudioData()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
