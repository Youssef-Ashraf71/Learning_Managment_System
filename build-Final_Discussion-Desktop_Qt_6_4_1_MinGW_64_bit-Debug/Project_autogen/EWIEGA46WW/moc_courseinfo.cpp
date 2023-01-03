/****************************************************************************
** Meta object code from reading C++ file 'courseinfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Final_Discussion/courseinfo.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'courseinfo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Courseinfo_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[22];
    char stringdata6[24];
    char stringdata7[4];
    char stringdata8[7];
    char stringdata9[22];
    char stringdata10[28];
    char stringdata11[22];
    char stringdata12[22];
    char stringdata13[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Courseinfo_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Courseinfo_t qt_meta_stringdata_Courseinfo = {
    {
        QT_MOC_LITERAL(0, 10),  // "Courseinfo"
        QT_MOC_LITERAL(11, 12),  // "reload_table"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 13),  // "reload_combo1"
        QT_MOC_LITERAL(39, 13),  // "reload_combo2"
        QT_MOC_LITERAL(53, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(75, 23),  // "on_tbl_stud_cellChanged"
        QT_MOC_LITERAL(99, 3),  // "row"
        QT_MOC_LITERAL(103, 6),  // "column"
        QT_MOC_LITERAL(110, 21),  // "on_btn_filter_clicked"
        QT_MOC_LITERAL(132, 27),  // "on_btn_clear_filter_clicked"
        QT_MOC_LITERAL(160, 21),  // "on_btn_enroll_clicked"
        QT_MOC_LITERAL(182, 21),  // "on_btn_assign_clicked"
        QT_MOC_LITERAL(204, 27)   // "on_txt_filter_returnPressed"
    },
    "Courseinfo",
    "reload_table",
    "",
    "reload_combo1",
    "reload_combo2",
    "on_pushButton_clicked",
    "on_tbl_stud_cellChanged",
    "row",
    "column",
    "on_btn_filter_clicked",
    "on_btn_clear_filter_clicked",
    "on_btn_enroll_clicked",
    "on_btn_assign_clicked",
    "on_txt_filter_returnPressed"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Courseinfo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    2,   78,    2, 0x08,    5 /* Private */,
       9,    0,   83,    2, 0x08,    8 /* Private */,
      10,    0,   84,    2, 0x08,    9 /* Private */,
      11,    0,   85,    2, 0x08,   10 /* Private */,
      12,    0,   86,    2, 0x08,   11 /* Private */,
      13,    0,   87,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Courseinfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Courseinfo.offsetsAndSizes,
    qt_meta_data_Courseinfo,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Courseinfo_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Courseinfo, std::true_type>,
        // method 'reload_table'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reload_combo1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reload_combo2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tbl_stud_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btn_filter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_clear_filter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_enroll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_assign_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_txt_filter_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Courseinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Courseinfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reload_table(); break;
        case 1: _t->reload_combo1(); break;
        case 2: _t->reload_combo2(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_tbl_stud_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->on_btn_filter_clicked(); break;
        case 6: _t->on_btn_clear_filter_clicked(); break;
        case 7: _t->on_btn_enroll_clicked(); break;
        case 8: _t->on_btn_assign_clicked(); break;
        case 9: _t->on_txt_filter_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject *Courseinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Courseinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Courseinfo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Courseinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
