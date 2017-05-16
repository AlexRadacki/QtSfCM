/****************************************************************************
** Meta object code from reading C++ file 'additemdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../additemdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'additemdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddItemDialog_t {
    QByteArrayData data[9];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddItemDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddItemDialog_t qt_meta_stringdata_AddItemDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddItemDialog"
QT_MOC_LITERAL(1, 14, 25), // "on_loadFileButton_pressed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_cancelButton_pressed"
QT_MOC_LITERAL(4, 65, 22), // "on_applyButton_pressed"
QT_MOC_LITERAL(5, 88, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(6, 120, 5), // "index"
QT_MOC_LITERAL(7, 126, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(8, 146, 7) // "checked"

    },
    "AddItemDialog\0on_loadFileButton_pressed\0"
    "\0on_cancelButton_pressed\0"
    "on_applyButton_pressed\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_checkBox_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddItemDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void AddItemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddItemDialog *_t = static_cast<AddItemDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loadFileButton_pressed(); break;
        case 1: _t->on_cancelButton_pressed(); break;
        case 2: _t->on_applyButton_pressed(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddItemDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddItemDialog.data,
      qt_meta_data_AddItemDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddItemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddItemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddItemDialog.stringdata0))
        return static_cast<void*>(const_cast< AddItemDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddItemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
