/****************************************************************************
** Meta object code from reading C++ file 'cusdr_colorsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_colorsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_colorsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorOptionsWidget_t {
    QByteArrayData data[29];
    char stringdata[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorOptionsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorOptionsWidget_t qt_meta_stringdata_ColorOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 5),
QT_MOC_LITERAL(4, 39, 8),
QT_MOC_LITERAL(5, 48, 15),
QT_MOC_LITERAL(6, 64, 18),
QT_MOC_LITERAL(7, 83, 6),
QT_MOC_LITERAL(8, 90, 12),
QT_MOC_LITERAL(9, 103, 3),
QT_MOC_LITERAL(10, 107, 22),
QT_MOC_LITERAL(11, 130, 6),
QT_MOC_LITERAL(12, 137, 17),
QT_MOC_LITERAL(13, 155, 4),
QT_MOC_LITERAL(14, 160, 22),
QT_MOC_LITERAL(15, 183, 5),
QT_MOC_LITERAL(16, 189, 18),
QT_MOC_LITERAL(17, 208, 2),
QT_MOC_LITERAL(18, 211, 15),
QT_MOC_LITERAL(19, 227, 7),
QT_MOC_LITERAL(20, 235, 18),
QT_MOC_LITERAL(21, 254, 18),
QT_MOC_LITERAL(22, 273, 18),
QT_MOC_LITERAL(23, 292, 19),
QT_MOC_LITERAL(24, 312, 11),
QT_MOC_LITERAL(25, 324, 12),
QT_MOC_LITERAL(26, 337, 20),
QT_MOC_LITERAL(27, 358, 17),
QT_MOC_LITERAL(28, 376, 5)
    },
    "ColorOptionsWidget\0colorChanged\0\0color\0"
    "sizeHint\0minimumSizeHint\0systemStateChanged\0"
    "sender\0QSDR::_Error\0err\0QSDR::_HWInterfaceMode\0"
    "hwmode\0QSDR::_ServerMode\0mode\0"
    "QSDR::_DataEngineState\0state\0"
    "graphicModeChanged\0rx\0PanGraphicsMode\0"
    "panMode\0WaterfallColorMode\0"
    "waterfallColorMode\0setCurrentReceiver\0"
    "colorChooserChanged\0resetColors\0"
    "acceptColors\0triangleColorChanged\0"
    "sampleRateChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorOptionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    5,   74,    2, 0x08 /* Private */,
      16,    4,   85,    2, 0x08 /* Private */,
      22,    2,   94,    2, 0x08 /* Private */,
      23,    0,   99,    2, 0x08 /* Private */,
      24,    0,  100,    2, 0x08 /* Private */,
      25,    0,  101,    2, 0x08 /* Private */,
      26,    1,  102,    2, 0x08 /* Private */,
      27,    2,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14,    7,    9,   11,   13,   15,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int, 0x80000000 | 18, 0x80000000 | 20,    7,   17,   19,   21,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    7,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    7,   28,

       0        // eod
};

void ColorOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorOptionsWidget *_t = static_cast<ColorOptionsWidget *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 2: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 3: _t->systemStateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSDR::_Error(*)>(_a[2])),(*reinterpret_cast< QSDR::_HWInterfaceMode(*)>(_a[3])),(*reinterpret_cast< QSDR::_ServerMode(*)>(_a[4])),(*reinterpret_cast< QSDR::_DataEngineState(*)>(_a[5]))); break;
        case 4: _t->graphicModeChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PanGraphicsMode(*)>(_a[3])),(*reinterpret_cast< WaterfallColorMode(*)>(_a[4]))); break;
        case 5: _t->setCurrentReceiver((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->colorChooserChanged(); break;
        case 7: _t->resetColors(); break;
        case 8: _t->acceptColors(); break;
        case 9: _t->triangleColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: _t->sampleRateChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (ColorOptionsWidget::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorOptionsWidget::colorChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ColorOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorOptionsWidget.data,
      qt_meta_data_ColorOptionsWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *ColorOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorOptionsWidget.stringdata))
        return static_cast<void*>(const_cast< ColorOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColorOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ColorOptionsWidget::colorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
