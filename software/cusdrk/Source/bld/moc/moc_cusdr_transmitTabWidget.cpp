/****************************************************************************
** Meta object code from reading C++ file 'cusdr_transmitTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_transmitTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_transmitTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransmitTabWidget_t {
    QByteArrayData data[12];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransmitTabWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransmitTabWidget_t qt_meta_stringdata_TransmitTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 9),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 6),
QT_MOC_LITERAL(4, 36, 10),
QT_MOC_LITERAL(5, 47, 12),
QT_MOC_LITERAL(6, 60, 7),
QT_MOC_LITERAL(7, 68, 8),
QT_MOC_LITERAL(8, 77, 15),
QT_MOC_LITERAL(9, 93, 23),
QT_MOC_LITERAL(10, 117, 16),
QT_MOC_LITERAL(11, 134, 5)
    },
    "TransmitTabWidget\0showEvent\0\0sender\0"
    "closeEvent\0messageEvent\0message\0"
    "sizeHint\0minimumSizeHint\0"
    "addNICChangedConnection\0setPennyPresence\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransmitTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   58,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void TransmitTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransmitTabWidget *_t = static_cast<TransmitTabWidget *>(_o);
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 4: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 5: _t->addNICChangedConnection(); break;
        case 6: _t->setPennyPresence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransmitTabWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransmitTabWidget::showEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (TransmitTabWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransmitTabWidget::closeEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (TransmitTabWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransmitTabWidget::messageEvent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TransmitTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TransmitTabWidget.data,
      qt_meta_data_TransmitTabWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransmitTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransmitTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransmitTabWidget.stringdata))
        return static_cast<void*>(const_cast< TransmitTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TransmitTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TransmitTabWidget::showEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransmitTabWidget::closeEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransmitTabWidget::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
