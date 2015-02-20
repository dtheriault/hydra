/****************************************************************************
** Meta object code from reading C++ file 'cusdr_chirpProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DataEngine/cusdr_chirpProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_chirpProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChirpProcessor_t {
    QByteArrayData data[22];
    char stringdata[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChirpProcessor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChirpProcessor_t qt_meta_stringdata_ChirpProcessor = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 7),
QT_MOC_LITERAL(4, 37, 4),
QT_MOC_LITERAL(5, 42, 16),
QT_MOC_LITERAL(6, 59, 18),
QT_MOC_LITERAL(7, 78, 22),
QT_MOC_LITERAL(8, 101, 12),
QT_MOC_LITERAL(9, 114, 4),
QT_MOC_LITERAL(10, 119, 19),
QT_MOC_LITERAL(11, 139, 6),
QT_MOC_LITERAL(12, 146, 5),
QT_MOC_LITERAL(13, 152, 11),
QT_MOC_LITERAL(14, 164, 12),
QT_MOC_LITERAL(15, 177, 8),
QT_MOC_LITERAL(16, 186, 8),
QT_MOC_LITERAL(17, 195, 24),
QT_MOC_LITERAL(18, 220, 15),
QT_MOC_LITERAL(19, 236, 16),
QT_MOC_LITERAL(20, 253, 23),
QT_MOC_LITERAL(21, 277, 23)
    },
    "ChirpProcessor\0messageEvent\0\0message\0"
    "stop\0processChirpData\0generateLocalChirp\0"
    "matchedFilterFIRFilter\0QList<qreal>\0"
    "data\0samplingRateChanged\0sender\0value\0"
    "setSpectras\0const float*\0distance\0"
    "chirpfft\0setDistSpectrumAvgLength\0"
    "setChirpFFTShow\0setChirpSideband\0"
    "setFilterLowerFrequency\0setFilterUpperFrequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChirpProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x08 /* Private */,
      10,    2,   83,    2, 0x08 /* Private */,
      13,    2,   88,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,
      18,    1,   96,    2, 0x08 /* Private */,
      19,    1,   99,    2, 0x08 /* Private */,
      20,    1,  102,    2, 0x08 /* Private */,
      21,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ChirpProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChirpProcessor *_t = static_cast<ChirpProcessor *>(_o);
        switch (_id) {
        case 0: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: _t->processChirpData(); break;
        case 3: _t->generateLocalChirp(); break;
        case 4: _t->matchedFilterFIRFilter((*reinterpret_cast< QList<qreal>(*)>(_a[1]))); break;
        case 5: _t->samplingRateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setSpectras((*reinterpret_cast< const float*(*)>(_a[1])),(*reinterpret_cast< const float*(*)>(_a[2]))); break;
        case 7: _t->setDistSpectrumAvgLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setChirpFFTShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setChirpSideband((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFilterLowerFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setFilterUpperFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChirpProcessor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpProcessor::messageEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ChirpProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChirpProcessor.data,
      qt_meta_data_ChirpProcessor,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChirpProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChirpProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChirpProcessor.stringdata))
        return static_cast<void*>(const_cast< ChirpProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int ChirpProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ChirpProcessor::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
