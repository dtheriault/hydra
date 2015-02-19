/****************************************************************************
** Meta object code from reading C++ file 'cusdr_agcWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_agcWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_agcWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AGCOptionsWidget_t {
    QByteArrayData data[34];
    char stringdata[479];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AGCOptionsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AGCOptionsWidget_t qt_meta_stringdata_AGCOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 9),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 6),
QT_MOC_LITERAL(4, 35, 10),
QT_MOC_LITERAL(5, 46, 12),
QT_MOC_LITERAL(6, 59, 8),
QT_MOC_LITERAL(7, 68, 15),
QT_MOC_LITERAL(8, 84, 18),
QT_MOC_LITERAL(9, 103, 12),
QT_MOC_LITERAL(10, 116, 3),
QT_MOC_LITERAL(11, 120, 22),
QT_MOC_LITERAL(12, 143, 6),
QT_MOC_LITERAL(13, 150, 17),
QT_MOC_LITERAL(14, 168, 4),
QT_MOC_LITERAL(15, 173, 22),
QT_MOC_LITERAL(16, 196, 5),
QT_MOC_LITERAL(17, 202, 18),
QT_MOC_LITERAL(18, 221, 2),
QT_MOC_LITERAL(19, 224, 17),
QT_MOC_LITERAL(20, 242, 5),
QT_MOC_LITERAL(21, 248, 14),
QT_MOC_LITERAL(22, 263, 7),
QT_MOC_LITERAL(23, 271, 19),
QT_MOC_LITERAL(24, 291, 12),
QT_MOC_LITERAL(25, 304, 14),
QT_MOC_LITERAL(26, 319, 17),
QT_MOC_LITERAL(27, 337, 16),
QT_MOC_LITERAL(28, 354, 15),
QT_MOC_LITERAL(29, 370, 16),
QT_MOC_LITERAL(30, 387, 25),
QT_MOC_LITERAL(31, 413, 25),
QT_MOC_LITERAL(32, 439, 20),
QT_MOC_LITERAL(33, 460, 18)
    },
    "AGCOptionsWidget\0showEvent\0\0sender\0"
    "closeEvent\0messageEvent\0sizeHint\0"
    "minimumSizeHint\0systemStateChanged\0"
    "QSDR::_Error\0err\0QSDR::_HWInterfaceMode\0"
    "hwmode\0QSDR::_ServerMode\0mode\0"
    "QSDR::_DataEngineState\0state\0"
    "setCurrentReceiver\0rx\0sampleRateChanged\0"
    "value\0agcModeChanged\0AGCMode\0"
    "agcModeChangedByBtn\0slopeChanged\0"
    "maxGainChanged\0attackTimeChanged\0"
    "decayTimeChanged\0hangTimeChanged\0"
    "fixedGainChanged\0hangThresholdValueChanged\0"
    "setAGCHangThresholdSlider\0"
    "setAGCMaximumGain_dB\0setAGCFixedGain_dB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AGCOptionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    1,  117,    2, 0x06 /* Public */,
       5,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  123,    2, 0x0a /* Public */,
       7,    0,  124,    2, 0x0a /* Public */,
       8,    5,  125,    2, 0x08 /* Private */,
      17,    2,  136,    2, 0x08 /* Private */,
      19,    2,  141,    2, 0x08 /* Private */,
      21,    4,  146,    2, 0x08 /* Private */,
      23,    0,  155,    2, 0x08 /* Private */,
      24,    1,  156,    2, 0x08 /* Private */,
      25,    1,  159,    2, 0x08 /* Private */,
      26,    1,  162,    2, 0x08 /* Private */,
      27,    1,  165,    2, 0x08 /* Private */,
      28,    1,  168,    2, 0x08 /* Private */,
      29,    1,  171,    2, 0x08 /* Private */,
      30,    1,  174,    2, 0x08 /* Private */,
      31,    3,  177,    2, 0x08 /* Private */,
      32,    3,  184,    2, 0x08 /* Private */,
      33,    3,  191,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,    3,   10,   12,   14,   16,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   18,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   20,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, 0x80000000 | 22, QMetaType::Bool,    3,   18,   14,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, QMetaType::QReal,    3,   18,   20,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, QMetaType::QReal,    3,   18,   20,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, QMetaType::QReal,    3,   18,   20,

       0        // eod
};

void AGCOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AGCOptionsWidget *_t = static_cast<AGCOptionsWidget *>(_o);
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 4: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: _t->systemStateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSDR::_Error(*)>(_a[2])),(*reinterpret_cast< QSDR::_HWInterfaceMode(*)>(_a[3])),(*reinterpret_cast< QSDR::_ServerMode(*)>(_a[4])),(*reinterpret_cast< QSDR::_DataEngineState(*)>(_a[5]))); break;
        case 6: _t->setCurrentReceiver((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->sampleRateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->agcModeChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< AGCMode(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 9: _t->agcModeChangedByBtn(); break;
        case 10: _t->slopeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->maxGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->attackTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->decayTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->hangTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->fixedGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->hangThresholdValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setAGCHangThresholdSlider((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 18: _t->setAGCMaximumGain_dB((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 19: _t->setAGCFixedGain_dB((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSDR::_DataEngineState >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSDR::_Error >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSDR::_HWInterfaceMode >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSDR::_ServerMode >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGCMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AGCOptionsWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AGCOptionsWidget::showEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (AGCOptionsWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AGCOptionsWidget::closeEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (AGCOptionsWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AGCOptionsWidget::messageEvent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject AGCOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AGCOptionsWidget.data,
      qt_meta_data_AGCOptionsWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *AGCOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AGCOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AGCOptionsWidget.stringdata))
        return static_cast<void*>(const_cast< AGCOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AGCOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void AGCOptionsWidget::showEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AGCOptionsWidget::closeEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AGCOptionsWidget::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
