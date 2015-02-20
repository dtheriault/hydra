/****************************************************************************
** Meta object code from reading C++ file 'cusdr_chirpWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/cusdr_chirpWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cusdr_chirpWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChirpWidget_t {
    QByteArrayData data[44];
    char stringdata[644];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChirpWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChirpWidget_t qt_meta_stringdata_ChirpWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 6),
QT_MOC_LITERAL(4, 30, 10),
QT_MOC_LITERAL(5, 41, 12),
QT_MOC_LITERAL(6, 54, 21),
QT_MOC_LITERAL(7, 76, 5),
QT_MOC_LITERAL(8, 82, 13),
QT_MOC_LITERAL(9, 96, 8),
QT_MOC_LITERAL(10, 105, 13),
QT_MOC_LITERAL(11, 119, 19),
QT_MOC_LITERAL(12, 139, 24),
QT_MOC_LITERAL(13, 164, 8),
QT_MOC_LITERAL(14, 173, 15),
QT_MOC_LITERAL(15, 189, 16),
QT_MOC_LITERAL(16, 206, 14),
QT_MOC_LITERAL(17, 221, 11),
QT_MOC_LITERAL(18, 233, 7),
QT_MOC_LITERAL(19, 241, 13),
QT_MOC_LITERAL(20, 255, 18),
QT_MOC_LITERAL(21, 274, 12),
QT_MOC_LITERAL(22, 287, 14),
QT_MOC_LITERAL(23, 302, 22),
QT_MOC_LITERAL(24, 325, 2),
QT_MOC_LITERAL(25, 328, 22),
QT_MOC_LITERAL(26, 351, 17),
QT_MOC_LITERAL(27, 369, 3),
QT_MOC_LITERAL(28, 373, 24),
QT_MOC_LITERAL(29, 398, 23),
QT_MOC_LITERAL(30, 422, 23),
QT_MOC_LITERAL(31, 446, 23),
QT_MOC_LITERAL(32, 470, 20),
QT_MOC_LITERAL(33, 491, 8),
QT_MOC_LITERAL(34, 500, 6),
QT_MOC_LITERAL(35, 507, 17),
QT_MOC_LITERAL(36, 525, 8),
QT_MOC_LITERAL(37, 534, 24),
QT_MOC_LITERAL(38, 559, 24),
QT_MOC_LITERAL(39, 584, 12),
QT_MOC_LITERAL(40, 597, 13),
QT_MOC_LITERAL(41, 611, 13),
QT_MOC_LITERAL(42, 625, 12),
QT_MOC_LITERAL(43, 638, 5)
    },
    "ChirpWidget\0showEvent\0\0sender\0closeEvent\0"
    "messageEvent\0initChirpDecoderEvent\0"
    "value\0loadFileEvent\0fileName\0suspendSignal\0"
    "startPlaybackSignal\0showSettingsDialogSignal\0"
    "sizeHint\0minimumSizeHint\0initChirpDecoder\0"
    "showFileDialog\0setReceiver\0suspend\0"
    "startPlayback\0showSettingsDialog\0"
    "showChirpFFT\0switchSideband\0"
    "setChirpLowerFrequency\0lo\0"
    "setChirpUpperFrequency\0setChirpAmplitude\0"
    "amp\0setChirpBufferDurationUs\0"
    "setChirpRepetitionTimes\0setFilterLowerFrequency\0"
    "setFilterUpperFrequency\0chirpSpectrumChanged\0"
    "position\0length\0FrequencySpectrum\0"
    "spectrum\0chirpSpectrumListChanged\0"
    "QList<FrequencySpectrum>\0spectrumList\0"
    "resetSpectrum\0updateStripes\0stripeResize\0"
    "scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChirpWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    1,  167,    2, 0x06 /* Public */,
       5,    1,  170,    2, 0x06 /* Public */,
       6,    2,  173,    2, 0x06 /* Public */,
       8,    2,  178,    2, 0x06 /* Public */,
      10,    1,  183,    2, 0x06 /* Public */,
      11,    1,  186,    2, 0x06 /* Public */,
      12,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  192,    2, 0x0a /* Public */,
      14,    0,  193,    2, 0x0a /* Public */,
      15,    0,  194,    2, 0x08 /* Private */,
      16,    0,  195,    2, 0x08 /* Private */,
      17,    0,  196,    2, 0x08 /* Private */,
      18,    0,  197,    2, 0x08 /* Private */,
      19,    0,  198,    2, 0x08 /* Private */,
      20,    0,  199,    2, 0x08 /* Private */,
      21,    0,  200,    2, 0x08 /* Private */,
      22,    0,  201,    2, 0x08 /* Private */,
      23,    2,  202,    2, 0x08 /* Private */,
      25,    2,  207,    2, 0x08 /* Private */,
      26,    2,  212,    2, 0x08 /* Private */,
      28,    2,  217,    2, 0x08 /* Private */,
      29,    2,  222,    2, 0x08 /* Private */,
      30,    2,  227,    2, 0x08 /* Private */,
      31,    2,  232,    2, 0x08 /* Private */,
      32,    3,  237,    2, 0x08 /* Private */,
      37,    1,  244,    2, 0x08 /* Private */,
      40,    0,  247,    2, 0x08 /* Private */,
      41,    0,  248,    2, 0x08 /* Private */,
      42,    1,  249,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    3,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    3,    9,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   24,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   24,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QReal,    3,   27,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::LongLong,    3,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   24,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    3,   24,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, 0x80000000 | 35,   33,   34,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,

       0        // eod
};

void ChirpWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChirpWidget *_t = static_cast<ChirpWidget *>(_o);
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->messageEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->initChirpDecoderEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->loadFileEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->suspendSignal((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->startPlaybackSignal((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->showSettingsDialogSignal((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 10: _t->initChirpDecoder(); break;
        case 11: _t->showFileDialog(); break;
        case 12: _t->setReceiver(); break;
        case 13: _t->suspend(); break;
        case 14: _t->startPlayback(); break;
        case 15: _t->showSettingsDialog(); break;
        case 16: _t->showChirpFFT(); break;
        case 17: _t->switchSideband(); break;
        case 18: _t->setChirpLowerFrequency((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setChirpUpperFrequency((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setChirpAmplitude((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 21: _t->setChirpBufferDurationUs((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 22: _t->setChirpRepetitionTimes((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->setFilterLowerFrequency((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->setFilterUpperFrequency((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->chirpSpectrumChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const FrequencySpectrum(*)>(_a[3]))); break;
        case 26: _t->chirpSpectrumListChanged((*reinterpret_cast< const QList<FrequencySpectrum>(*)>(_a[1]))); break;
        case 27: _t->resetSpectrum(); break;
        case 28: _t->updateStripes(); break;
        case 29: _t->stripeResize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChirpWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::showEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::closeEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::messageEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::initChirpDecoderEvent)) {
                *result = 3;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::loadFileEvent)) {
                *result = 4;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::suspendSignal)) {
                *result = 5;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::startPlaybackSignal)) {
                *result = 6;
            }
        }
        {
            typedef void (ChirpWidget::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChirpWidget::showSettingsDialogSignal)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject ChirpWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChirpWidget.data,
      qt_meta_data_ChirpWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChirpWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChirpWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChirpWidget.stringdata))
        return static_cast<void*>(const_cast< ChirpWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChirpWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void ChirpWidget::showEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChirpWidget::closeEvent(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChirpWidget::messageEvent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChirpWidget::initChirpDecoderEvent(QObject * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChirpWidget::loadFileEvent(QObject * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChirpWidget::suspendSignal(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChirpWidget::startPlaybackSignal(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChirpWidget::showSettingsDialogSignal(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
