/****************************************************************************
** Meta object code from reading C++ file 'ccabin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../lab_04/ccabin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccabin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cabin_t {
    QByteArrayData data[12];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cabin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cabin_t qt_meta_stringdata_Cabin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Cabin"
QT_MOC_LITERAL(1, 6, 12), // "FloorVisited"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "floor"
QT_MOC_LITERAL(4, 26, 9), // "Direction"
QT_MOC_LITERAL(5, 36, 1), // "d"
QT_MOC_LITERAL(6, 38, 19), // "FloorTargetAchieved"
QT_MOC_LITERAL(7, 58, 13), // "FloorAchieved"
QT_MOC_LITERAL(8, 72, 4), // "Move"
QT_MOC_LITERAL(9, 77, 10), // "slotMoving"
QT_MOC_LITERAL(10, 88, 8), // "slotFree"
QT_MOC_LITERAL(11, 97, 8) // "slotBusy"

    },
    "Cabin\0FloorVisited\0\0floor\0Direction\0"
    "d\0FloorTargetAchieved\0FloorAchieved\0"
    "Move\0slotMoving\0slotFree\0slotBusy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cabin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Cabin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cabin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FloorVisited((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 1: _t->FloorTargetAchieved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 2: _t->FloorAchieved(); break;
        case 3: _t->Move(); break;
        case 4: _t->slotMoving(); break;
        case 5: _t->slotFree(); break;
        case 6: _t->slotBusy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cabin::*)(int , Direction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::FloorVisited)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cabin::*)(int , Direction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::FloorTargetAchieved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cabin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::FloorAchieved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Cabin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::Move)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cabin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Cabin.data,
    qt_meta_data_Cabin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cabin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cabin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cabin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cabin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Cabin::FloorVisited(int _t1, Direction _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cabin::FloorTargetAchieved(int _t1, Direction _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cabin::FloorAchieved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cabin::Move()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
