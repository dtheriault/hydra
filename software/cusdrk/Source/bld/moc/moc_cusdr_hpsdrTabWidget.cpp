/****************************************************************************
** Meta object code from reading C++ file 'cusdr_hpsdrTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_hpsdrTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_hpsdrTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HPSDRTabWidget_t {
    QByteArrayData data[22];
    char stringdata[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HPSDRTabWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HPSDRTabWidget_t qt_meta_stringdata_HPSDRTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 9),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 10),
QT_MOC_LITERAL(5, 44, 12),
QT_MOC_LITERAL(6, 57, 7),
QT_MOC_LITERAL(7, 65, 8),
QT_MOC_LITERAL(8, 74, 15),
QT_MOC_LITERAL(9, 90, 23),
QT_MOC_LITERAL(10, 114, 18),
QT_MOC_LITERAL(11, 133, 12),
QT_MOC_LITERAL(12, 146, 3),
QT_MOC_LITERAL(13, 150, 22),
QT_MOC_LITERAL(14, 173, 6),
QT_MOC_LITERAL(15, 180, 17),
QT_MOC_LITERAL(16, 198, 4),
QT_MOC_LITERAL(17, 203, 22),
QT_MOC_LITERAL(18, 226, 5),
QT_MOC_LITERAL(19, 232, 15),
QT_MOC_LITERAL(20, 248, 5),
QT_MOC_LITERAL(21, 254, 16)
    },
    "HPSDRTabWidget\0showEvent\0\0sender\0"
    "closeEvent\0messageEvent\0message\0"
    "sizeHint\0minimumSizeHint\0"
    "addNICChangedConnection\0systemStateChanged\0"
    "QSDR::_Error\0err\0QSDR::_HWInterfaceMode\0"
    "hwmode\0QSDR::_ServerMode\0mode\0"
    "QSDR::_DataEngineState\0state\0"
    "setAlexPresence\0value\0setPennyPresence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HPSDRTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   68,    2, 0x0a /* Public */,
       8,    0,   69,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x0a /* Public */,
      10,    5,   71,    2, 0x08 /* Private */,
      19,    1,   82,    2, 0x08 /* Private */,
      21,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 17,    3,   12,   14,   16,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,

       0        // eod
};

void HPSDRTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HPSDRTabWidget *_t = static_cast<HPSDRTabWidget *>(_o);
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 4: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: _t->addNICChangedConnection(); break;
        case 6: _t->systemStateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSDR::_Error(*)>(_a[2])),(*reinterpret_cast< QSDR::_HWInterfaceMode(*)>(_a[3])),(*reinterpret_cast< QSDR::_ServerMode(*)>(_a[4])),(*reinterpret_cast< QSDR::_DataEngineState(*)>(_a[5]))); break;
        case 7: _t->setAlexPresence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setPennyPresence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            typedef void (HPSDRTabWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPSDRTabWidget::showEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (HPSDRTabWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPSDRTabWidget::closeEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (HPSDRTabWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HPSDRTabWidget::messageEvent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject HPSDRTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_HPSDRTabWidget.data,
      qt_meta_data_HPSDRTabWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *HPSDRTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HPSDRTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HPSDRTabWidget.stringdata))
        return static_cast<void*>(const_cast< HPSDRTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int HPSDRTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
void HPSDRTabWidget::showEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HPSDRTabWidget::closeEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HPSDRTabWidget::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
