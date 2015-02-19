/****************************************************************************
** Meta object code from reading C++ file 'cusdr_dataIO.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DataEngine/cusdr_dataIO.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_dataIO.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataIO_t {
    QByteArrayData data[23];
    char stringdata[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataIO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataIO_t qt_meta_stringdata_DataIO = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 12),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 7),
QT_MOC_LITERAL(4, 29, 4),
QT_MOC_LITERAL(5, 34, 22),
QT_MOC_LITERAL(6, 57, 8),
QT_MOC_LITERAL(7, 66, 9),
QT_MOC_LITERAL(8, 76, 9),
QT_MOC_LITERAL(9, 86, 7),
QT_MOC_LITERAL(10, 94, 3),
QT_MOC_LITERAL(11, 98, 29),
QT_MOC_LITERAL(12, 128, 2),
QT_MOC_LITERAL(13, 131, 22),
QT_MOC_LITERAL(14, 154, 5),
QT_MOC_LITERAL(15, 160, 13),
QT_MOC_LITERAL(16, 174, 6),
QT_MOC_LITERAL(17, 181, 30),
QT_MOC_LITERAL(18, 212, 28),
QT_MOC_LITERAL(19, 241, 5),
QT_MOC_LITERAL(20, 247, 25),
QT_MOC_LITERAL(21, 273, 19),
QT_MOC_LITERAL(22, 293, 14)
    },
    "DataIO\0messageEvent\0\0message\0stop\0"
    "initDataReceiverSocket\0readData\0"
    "writeData\0sendAudio\0u_char*\0buf\0"
    "sendInitFramesToNetworkDevice\0rx\0"
    "networkDeviceStartStop\0value\0setSampleRate\0"
    "sender\0displayDataReceiverSocketError\0"
    "QAbstractSocket::SocketError\0error\0"
    "setManualSocketBufferSize\0setSocketBufferSize\0"
    "readDeviceData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataIO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    0,   84,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x0a /* Public */,
       8,    1,   86,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      15,    2,   95,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      20,    2,  103,    2, 0x08 /* Private */,
      21,    2,  108,    2, 0x08 /* Private */,
      22,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Char,   14,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,   16,   14,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,   16,   14,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,   16,   14,
    QMetaType::Void,

       0        // eod
};

void DataIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataIO *_t = static_cast<DataIO *>(_o);
        switch (_id) {
        case 0: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: _t->initDataReceiverSocket(); break;
        case 3: _t->readData(); break;
        case 4: _t->writeData(); break;
        case 5: _t->sendAudio((*reinterpret_cast< u_char*(*)>(_a[1]))); break;
        case 6: _t->sendInitFramesToNetworkDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->networkDeviceStartStop((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 8: _t->setSampleRate((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->displayDataReceiverSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->setManualSocketBufferSize((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->setSocketBufferSize((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->readDeviceData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
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
            typedef void (DataIO::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataIO::messageEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DataIO::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataIO.data,
      qt_meta_data_DataIO,  qt_static_metacall, 0, 0}
};


const QMetaObject *DataIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataIO.stringdata))
        return static_cast<void*>(const_cast< DataIO*>(this));
    return QObject::qt_metacast(_clname);
}

int DataIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DataIO::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
