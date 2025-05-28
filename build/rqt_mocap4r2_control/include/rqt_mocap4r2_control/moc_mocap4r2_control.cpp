/****************************************************************************
** Meta object code from reading C++ file 'mocap4r2_control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/mocap4r2/mocap4r2_control/rqt_mocap4r2_control/include/rqt_mocap4r2_control/mocap4r2_control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mocap4r2_control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_mocap4r2_control__MocapControl_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_mocap4r2_control__MocapControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_mocap4r2_control__MocapControl_t qt_meta_stringdata_rqt_mocap4r2_control__MocapControl = {
    {
QT_MOC_LITERAL(0, 0, 34), // "rqt_mocap4r2_control::MocapCo..."
QT_MOC_LITERAL(1, 35, 13), // "start_capture"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "select_output_dir"
QT_MOC_LITERAL(4, 68, 17), // "select_record_all"
QT_MOC_LITERAL(5, 86, 7), // "checked"
QT_MOC_LITERAL(6, 94, 17), // "select_active_all"
QT_MOC_LITERAL(7, 112, 11), // "enable_ros1"
QT_MOC_LITERAL(8, 124, 5), // "state"
QT_MOC_LITERAL(9, 130, 9) // "spin_loop"

    },
    "rqt_mocap4r2_control::MocapControl\0"
    "start_capture\0\0select_output_dir\0"
    "select_record_all\0checked\0select_active_all\0"
    "enable_ros1\0state\0spin_loop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_mocap4r2_control__MocapControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    1,   46,    2, 0x09 /* Protected */,
       6,    1,   49,    2, 0x09 /* Protected */,
       7,    1,   52,    2, 0x09 /* Protected */,
       9,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void rqt_mocap4r2_control::MocapControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MocapControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start_capture(); break;
        case 1: _t->select_output_dir(); break;
        case 2: _t->select_record_all((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->select_active_all((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enable_ros1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->spin_loop(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_mocap4r2_control::MocapControl::staticMetaObject = { {
    QMetaObject::SuperData::link<rqt_gui_cpp::Plugin::staticMetaObject>(),
    qt_meta_stringdata_rqt_mocap4r2_control__MocapControl.data,
    qt_meta_data_rqt_mocap4r2_control__MocapControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_mocap4r2_control::MocapControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_mocap4r2_control::MocapControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_mocap4r2_control__MocapControl.stringdata0))
        return static_cast<void*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int rqt_mocap4r2_control::MocapControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
