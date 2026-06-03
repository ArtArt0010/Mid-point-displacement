/****************************************************************************
** Meta object code from reading C++ file 'mid_point_displacment.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
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
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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

template <> constexpr inline auto Mid_point_displacment::qt_create_metaobjectdata<qt_meta_tag_ZN21Mid_point_displacmentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'roughnessChanged'
        QtMocHelpers::SignalData<void()>(4, 5, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offsetChanged'
        QtMocHelpers::SignalData<void()>(6, 5, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iterationsChanged'
        QtMocHelpers::SignalData<void()>(7, 5, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cameraXChanged'
        QtMocHelpers::SignalData<void()>(8, 5, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showChunkBordersChanged'
        QtMocHelpers::SignalData<void()>(9, 5, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'roughness'
        QtMocHelpers::PropertyData<double>(10, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
        // property 'offset'
        QtMocHelpers::PropertyData<double>(11, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'iterations'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 2),
        // property 'cameraX'
        QtMocHelpers::PropertyData<double>(13, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'showChunkBorders'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    1,    3 },
    });
    return QtMocHelpers::metaObjectData<Mid_point_displacment, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Mid_point_displacment::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21Mid_point_displacmentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21Mid_point_displacmentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21Mid_point_displacmentE_t>.metaTypes,
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
        if (QtMocHelpers::indexOfMethod<void (Mid_point_displacment::*)()>(_a, &Mid_point_displacment::roughnessChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mid_point_displacment::*)()>(_a, &Mid_point_displacment::offsetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mid_point_displacment::*)()>(_a, &Mid_point_displacment::iterationsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mid_point_displacment::*)()>(_a, &Mid_point_displacment::cameraXChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mid_point_displacment::*)()>(_a, &Mid_point_displacment::showChunkBordersChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->roughness(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->offset(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->iterations(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->cameraX(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->showChunkBorders(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoughness(*reinterpret_cast<double*>(_v)); break;
        case 1: _t->setOffset(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setIterations(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setCameraX(*reinterpret_cast<double*>(_v)); break;
        case 4: _t->setShowChunkBorders(*reinterpret_cast<bool*>(_v)); break;
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
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21Mid_point_displacmentE_t>.strings))
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
