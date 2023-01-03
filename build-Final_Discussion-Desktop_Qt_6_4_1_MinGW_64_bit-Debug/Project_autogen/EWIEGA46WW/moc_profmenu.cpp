/****************************************************************************
** Meta object code from reading C++ file 'profmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Final_Discussion/profmenu.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profmenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_profmenu_t {
    uint offsetsAndSizes[24];
    char stringdata0[9];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[31];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[20];
    char stringdata8[19];
    char stringdata9[25];
    char stringdata10[25];
    char stringdata11[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_profmenu_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_profmenu_t qt_meta_stringdata_profmenu = {
    {
        QT_MOC_LITERAL(0, 8),  // "profmenu"
        QT_MOC_LITERAL(9, 18),  // "on_backbtn_clicked"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 17),  // "on_addbtn_clicked"
        QT_MOC_LITERAL(47, 30),  // "on_tableprof_cellDoubleClicked"
        QT_MOC_LITERAL(78, 3),  // "row"
        QT_MOC_LITERAL(82, 6),  // "column"
        QT_MOC_LITERAL(89, 19),  // "on_clearbtn_clicked"
        QT_MOC_LITERAL(109, 18),  // "on_srchbtn_clicked"
        QT_MOC_LITERAL(128, 24),  // "on_srchbar_returnPressed"
        QT_MOC_LITERAL(153, 24),  // "on_fltrbar_returnPressed"
        QT_MOC_LITERAL(178, 20)   // "on_applyfltr_clicked"
    },
    "profmenu",
    "on_backbtn_clicked",
    "",
    "on_addbtn_clicked",
    "on_tableprof_cellDoubleClicked",
    "row",
    "column",
    "on_clearbtn_clicked",
    "on_srchbtn_clicked",
    "on_srchbar_returnPressed",
    "on_fltrbar_returnPressed",
    "on_applyfltr_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_profmenu[] = {

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

Q_CONSTINIT const QMetaObject profmenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_profmenu.offsetsAndSizes,
    qt_meta_data_profmenu,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_profmenu_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<profmenu, std::true_type>,
        // method 'on_backbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableprof_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_clearbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_srchbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_srchbar_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fltrbar_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_applyfltr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void profmenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<profmenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_backbtn_clicked(); break;
        case 1: _t->on_addbtn_clicked(); break;
        case 2: _t->on_tableprof_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_clearbtn_clicked(); break;
        case 4: _t->on_srchbtn_clicked(); break;
        case 5: _t->on_srchbar_returnPressed(); break;
        case 6: _t->on_fltrbar_returnPressed(); break;
        case 7: _t->on_applyfltr_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *profmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_profmenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int profmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
