/****************************************************************************
** Meta object code from reading C++ file 'mid_point_displacment.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mid_point_displacment.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mid_point_displacment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN21Mid_point_displacmentE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN21Mid_point_displacmentE = QtMocHelpers::stringData(
    "Mid_point_displacment",
    "QML.Element",
    "auto",
    "MidPointD",
    "roughnessChanged",
    "",
    "offsetChanged",
    "iterationsChanged",
    "cameraXChanged",
    "showChunkBordersChanged",
    "roughness",
    "offset",
    "iterations",
    "cameraX",
    "showChunkBorders"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN21Mid_point_displacmentE[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       5,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,
       1,    3,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   48,    5, 0x06,    6 /* Public */,
       6,    0,   49,    5, 0x06,    7 /* Public */,
       7,    0,   50,    5, 0x06,    8 /* Public */,
       8,    0,   51,    5, 0x06,    9 /* Public */,
       9,    0,   52,    5, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      10, QMetaType::Double, 0x00015903, uint(0), 0,
      11, QMetaType::Double, 0x00015903, uint(1), 0,
      12, QMetaType::Int, 0x00015903, uint(2), 0,
      13, QMetaType::Double, 0x00015103, uint(3), 0,
      14, QMetaType::Bool, 0x00015903, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mid_point_displacment::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_ZN21Mid_point_displacmentE.offsetsAndSizes,
    qt_meta_data_ZN21Mid_point_displacmentE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'roughness'
        double,
        // property 'offset'
        double,
        // property 'iterations'
        int,
        // property 'cameraX'
        double,
        // property 'showChunkBorders'
        bool,
        // Q_OBJECT / Q_GADGET
        Mid_point_displacment,
        // method 'roughnessChanged'
        void,
        // method 'offsetChanged'
        void,
        // method 'iterationsChanged'
        void,
        // method 'cameraXChanged'
        void,
        // method 'showChunkBordersChanged'
        void
    >,
    nullptr
} };

void Mid_point_displacment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Mid_point_displacment *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->roughnessChanged(); break;
        case 1: _t->offsetChanged(); break;
        case 2: _t->iterationsChanged(); break;
        case 3: _t->cameraXChanged(); break;
        case 4: _t->showChunkBordersChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Mid_point_displacment::*)();
            if (_q_method_type _q_method = &Mid_point_displacment::roughnessChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Mid_point_displacment::*)();
            if (_q_method_type _q_method = &Mid_point_displacment::offsetChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Mid_point_displacment::*)();
            if (_q_method_type _q_method = &Mid_point_displacment::iterationsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Mid_point_displacment::*)();
            if (_q_method_type _q_method = &Mid_point_displacment::cameraXChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Mid_point_displacment::*)();
            if (_q_method_type _q_method = &Mid_point_displacment::showChunkBordersChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->roughness(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->offset(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->iterations(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->cameraX(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showChunkBorders(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoughness(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setOffset(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setIterations(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCameraX(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setShowChunkBorders(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Mid_point_displacment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mid_point_displacment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN21Mid_point_displacmentE.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Mid_point_displacment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Mid_point_displacment::roughnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mid_point_displacment::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Mid_point_displacment::iterationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Mid_point_displacment::cameraXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Mid_point_displacment::showChunkBordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
