/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../lab_04/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 10), // "SendTarget"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "floor"
QT_MOC_LITERAL(4, 29, 13), // "SignalMovieng"
QT_MOC_LITERAL(5, 43, 14), // "SignalOpenDoor"
QT_MOC_LITERAL(6, 58, 22), // "slotChangeCurrentFloor"
QT_MOC_LITERAL(7, 81, 9), // "Direction"
QT_MOC_LITERAL(8, 91, 1), // "d"
QT_MOC_LITERAL(9, 93, 16), // "slotAchieveFloor"
QT_MOC_LITERAL(10, 110, 15) // "slotAddNewFloor"

    },
    "Controller\0SendTarget\0\0floor\0SignalMovieng\0"
    "SignalOpenDoor\0slotChangeCurrentFloor\0"
    "Direction\0d\0slotAchieveFloor\0"
    "slotAddNewFloor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   49,    2, 0x0a /* Public */,
       9,    2,   54,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    3,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    3,    8,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendTarget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SignalMovieng(); break;
        case 2: _t->SignalOpenDoor(); break;
        case 3: _t->slotChangeCurrentFloor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 4: _t->slotAchieveFloor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 5: _t->slotAddNewFloor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::SendTarget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::SignalMovieng)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::SignalOpenDoor)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Controller.data,
    qt_meta_data_Controller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Controller::SendTarget(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Controller::SignalMovieng()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Controller::SignalOpenDoor()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
