/****************************************************************************
** Meta object code from reading C++ file 'cusdr_audio_spectrumanalyser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AudioEngine/cusdr_audio_spectrumanalyser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_audio_spectrumanalyser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpectrumAnalyserThread_t {
    QByteArrayData data[16];
    char stringdata[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumAnalyserThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumAnalyserThread_t qt_meta_stringdata_SpectrumAnalyserThread = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 19),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 17),
QT_MOC_LITERAL(4, 62, 8),
QT_MOC_LITERAL(5, 71, 24),
QT_MOC_LITERAL(6, 96, 24),
QT_MOC_LITERAL(7, 121, 12),
QT_MOC_LITERAL(8, 134, 17),
QT_MOC_LITERAL(9, 152, 14),
QT_MOC_LITERAL(10, 167, 4),
QT_MOC_LITERAL(11, 172, 17),
QT_MOC_LITERAL(12, 190, 6),
QT_MOC_LITERAL(13, 197, 14),
QT_MOC_LITERAL(14, 212, 14),
QT_MOC_LITERAL(15, 227, 22)
    },
    "SpectrumAnalyserThread\0calculationComplete\0"
    "\0FrequencySpectrum\0spectrum\0"
    "calculationTotalComplete\0"
    "QList<FrequencySpectrum>\0spectrumList\0"
    "setWindowFunction\0WindowFunction\0type\0"
    "calculateSpectrum\0buffer\0inputFrequency\0"
    "bytesPerSample\0calculateTotalSpectrum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumAnalyserThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   45,    2, 0x0a /* Public */,
      11,    3,   48,    2, 0x0a /* Public */,
      15,    3,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int,   12,   13,   14,

       0        // eod
};

void SpectrumAnalyserThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumAnalyserThread *_t = static_cast<SpectrumAnalyserThread *>(_o);
        switch (_id) {
        case 0: _t->calculationComplete((*reinterpret_cast< const FrequencySpectrum(*)>(_a[1]))); break;
        case 1: _t->calculationTotalComplete((*reinterpret_cast< const QList<FrequencySpectrum>(*)>(_a[1]))); break;
        case 2: _t->setWindowFunction((*reinterpret_cast< WindowFunction(*)>(_a[1]))); break;
        case 3: _t->calculateSpectrum((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->calculateTotalSpectrum((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpectrumAnalyserThread::*_t)(const FrequencySpectrum & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumAnalyserThread::calculationComplete)) {
                *result = 0;
            }
        }
        {
            typedef void (SpectrumAnalyserThread::*_t)(const QList<FrequencySpectrum> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumAnalyserThread::calculationTotalComplete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SpectrumAnalyserThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpectrumAnalyserThread.data,
      qt_meta_data_SpectrumAnalyserThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *SpectrumAnalyserThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumAnalyserThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumAnalyserThread.stringdata))
        return static_cast<void*>(const_cast< SpectrumAnalyserThread*>(this));
    return QObject::qt_metacast(_clname);
}

int SpectrumAnalyserThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpectrumAnalyserThread::calculationComplete(const FrequencySpectrum & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumAnalyserThread::calculationTotalComplete(const QList<FrequencySpectrum> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_SpectrumAnalyser_t {
    QByteArrayData data[11];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumAnalyser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumAnalyser_t qt_meta_stringdata_SpectrumAnalyser = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 17),
QT_MOC_LITERAL(4, 52, 8),
QT_MOC_LITERAL(5, 61, 19),
QT_MOC_LITERAL(6, 81, 24),
QT_MOC_LITERAL(7, 106, 12),
QT_MOC_LITERAL(8, 119, 19),
QT_MOC_LITERAL(9, 139, 24),
QT_MOC_LITERAL(10, 164, 14)
    },
    "SpectrumAnalyser\0spectrumChanged\0\0"
    "FrequencySpectrum\0spectrum\0"
    "spectrumListChanged\0QList<FrequencySpectrum>\0"
    "spectrumList\0calculationComplete\0"
    "calculationTotalComplete\0m_spectrumList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumAnalyser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x08 /* Private */,
       9,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,   10,

       0        // eod
};

void SpectrumAnalyser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumAnalyser *_t = static_cast<SpectrumAnalyser *>(_o);
        switch (_id) {
        case 0: _t->spectrumChanged((*reinterpret_cast< const FrequencySpectrum(*)>(_a[1]))); break;
        case 1: _t->spectrumListChanged((*reinterpret_cast< const QList<FrequencySpectrum>(*)>(_a[1]))); break;
        case 2: _t->calculationComplete((*reinterpret_cast< const FrequencySpectrum(*)>(_a[1]))); break;
        case 3: _t->calculationTotalComplete((*reinterpret_cast< const QList<FrequencySpectrum>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpectrumAnalyser::*_t)(const FrequencySpectrum & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumAnalyser::spectrumChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (SpectrumAnalyser::*_t)(const QList<FrequencySpectrum> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpectrumAnalyser::spectrumListChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SpectrumAnalyser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpectrumAnalyser.data,
      qt_meta_data_SpectrumAnalyser,  qt_static_metacall, 0, 0}
};


const QMetaObject *SpectrumAnalyser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumAnalyser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumAnalyser.stringdata))
        return static_cast<void*>(const_cast< SpectrumAnalyser*>(this));
    return QObject::qt_metacast(_clname);
}

int SpectrumAnalyser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpectrumAnalyser::spectrumChanged(const FrequencySpectrum & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumAnalyser::spectrumListChanged(const QList<FrequencySpectrum> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
