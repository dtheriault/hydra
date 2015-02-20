/****************************************************************************
** Meta object code from reading C++ file 'cusdr_hpsdrWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_hpsdrWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_hpsdrWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HPSDRWidget_t {
    QByteArrayData data[29];
    char stringdata[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HPSDRWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HPSDRWidget_t qt_meta_stringdata_HPSDRWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 7),
QT_MOC_LITERAL(4, 34, 20),
QT_MOC_LITERAL(5, 55, 23),
QT_MOC_LITERAL(6, 79, 20),
QT_MOC_LITERAL(7, 100, 22),
QT_MOC_LITERAL(8, 123, 19),
QT_MOC_LITERAL(9, 143, 24),
QT_MOC_LITERAL(10, 168, 22),
QT_MOC_LITERAL(11, 191, 18),
QT_MOC_LITERAL(12, 210, 6),
QT_MOC_LITERAL(13, 217, 12),
QT_MOC_LITERAL(14, 230, 3),
QT_MOC_LITERAL(15, 234, 22),
QT_MOC_LITERAL(16, 257, 6),
QT_MOC_LITERAL(17, 264, 17),
QT_MOC_LITERAL(18, 282, 4),
QT_MOC_LITERAL(19, 287, 22),
QT_MOC_LITERAL(20, 310, 5),
QT_MOC_LITERAL(21, 316, 16),
QT_MOC_LITERAL(22, 333, 18),
QT_MOC_LITERAL(23, 352, 20),
QT_MOC_LITERAL(24, 373, 5),
QT_MOC_LITERAL(25, 379, 14),
QT_MOC_LITERAL(26, 394, 13),
QT_MOC_LITERAL(27, 408, 20),
QT_MOC_LITERAL(28, 429, 17)
    },
    "HPSDRWidget\0messageEvent\0\0message\0"
    "hpsdrHardwareChanged\0penelopePresenceChanged\0"
    "pennyPresenceChanged\0mercuryPresenceChanged\0"
    "alexPresenceChanged\0excaliburPresenceChanged\0"
    "source122_88MhzChanged\0systemStateChanged\0"
    "sender\0QSDR::_Error\0err\0QSDR::_HWInterfaceMode\0"
    "hwmode\0QSDR::_ServerMode\0mode\0"
    "QSDR::_DataEngineState\0state\0"
    "setHPSDRHardware\0source10MhzChanged\0"
    "setNumberOfReceivers\0value\0disableButtons\0"
    "enableButtons\0firmwareCheckChanged\0"
    "sampleRateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HPSDRWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   97,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    5,  104,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,
      22,    0,  116,    2, 0x08 /* Private */,
      23,    1,  117,    2, 0x08 /* Private */,
      25,    0,  120,    2, 0x08 /* Private */,
      26,    0,  121,    2, 0x08 /* Private */,
      27,    0,  122,    2, 0x08 /* Private */,
      28,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 17, 0x80000000 | 19,   12,   14,   16,   18,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HPSDRWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HPSDRWidget *_t = static_cast<HPSDRWidget *>(_o);
        switch (_id) {
        case 0: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->hpsdrHardwareChanged(); break;
        case 2: _t->penelopePresenceChanged(); break;
        case 3: _t->pennyPresenceChanged(); break;
        case 4: _t->mercuryPresenceChanged(); break;
        case 5: _t->alexPresenceChanged(); break;
        case 6: _t->excaliburPresenceChanged(); break;
        case 7: _t->source122_88MhzChanged(); break;
        case 8: _t->systemStateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSDR::_Error(*)>(_a[2])),(*reinterpret_cast< QSDR::_HWInterfaceMode(*)>(_a[3])),(*reinterpret_cast< QSDR::_ServerMode(*)>(_a[4])),(*reinterpret_cast< QSDR::_DataEngineState(*)>(_a[5]))); break;
        case 9: _t->setHPSDRHardware(); break;
        case 10: _t->source10MhzChanged(); break;
        case 11: _t->setNumberOfReceivers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->disableButtons(); break;
        case 13: _t->enableButtons(); break;
        case 14: _t->firmwareCheckChanged(); break;
        case 15: _t->sampleRateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HPSDRWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPSDRWidget::messageEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HPSDRWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HPSDRWidget.data,
      qt_meta_data_HPSDRWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *HPSDRWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HPSDRWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HPSDRWidget.stringdata))
        return static_cast<void*>(const_cast< HPSDRWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int HPSDRWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void HPSDRWidget::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
