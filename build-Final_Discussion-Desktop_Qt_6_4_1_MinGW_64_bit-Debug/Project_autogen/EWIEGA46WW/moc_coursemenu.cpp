/****************************************************************************
** Meta object code from reading C++ file 'coursemenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Final_Discussion/coursemenu.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coursemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_coursemenu_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[32];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[28];
    char stringdata11[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_coursemenu_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_coursemenu_t qt_meta_stringdata_coursemenu = {
    {
        QT_MOC_LITERAL(0, 10),  // "coursemenu"
        QT_MOC_LITERAL(11, 24),  // "on_backbtncourse_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 18),  // "on_btn_add_clicked"
        QT_MOC_LITERAL(56, 31),  // "on_tbl_course_cellDoubleClicked"
        QT_MOC_LITERAL(88, 3),  // "row"
        QT_MOC_LITERAL(92, 6),  // "column"
        QT_MOC_LITERAL(99, 21),  // "on_btn_filter_clicked"
        QT_MOC_LITERAL(121, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(143, 21),  // "on_btn_search_clicked"
        QT_MOC_LITERAL(165, 27),  // "on_lbl_search_returnPressed"
        QT_MOC_LITERAL(193, 27)   // "on_lbl_filter_returnPressed"
    },
    "coursemenu",
    "on_backbtncourse_clicked",
    "",
    "on_btn_add_clicked",
    "on_tbl_course_cellDoubleClicked",
    "row",
    "column",
    "on_btn_filter_clicked",
    "on_pushButton_clicked",
    "on_btn_search_clicked",
    "on_lbl_search_returnPressed",
    "on_lbl_filter_returnPressed"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_coursemenu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    2,   64,    2, 0x08,    3 /* Private */,
       7,    0,   69,    2, 0x08,    6 /* Private */,
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject coursemenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_coursemenu.offsetsAndSizes,
    qt_meta_data_coursemenu,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_coursemenu_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<coursemenu, std::true_type>,
        // method 'on_backbtncourse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tbl_course_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btn_filter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_search_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lbl_search_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lbl_filter_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void coursemenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<coursemenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_backbtncourse_clicked(); break;
        case 1: _t->on_btn_add_clicked(); break;
        case 2: _t->on_tbl_course_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_btn_filter_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_btn_search_clicked(); break;
        case 6: _t->on_lbl_search_returnPressed(); break;
        case 7: _t->on_lbl_filter_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject *coursemenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *coursemenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_coursemenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int coursemenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
