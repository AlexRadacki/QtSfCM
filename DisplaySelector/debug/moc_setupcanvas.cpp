/****************************************************************************
** Meta object code from reading C++ file 'setupcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../setupcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setupcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SetupCanvas_t {
    QByteArrayData data[9];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetupCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetupCanvas_t qt_meta_stringdata_SetupCanvas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SetupCanvas"
QT_MOC_LITERAL(1, 12, 31), // "on_videoAdapterlist_itemClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 62, 4), // "item"
QT_MOC_LITERAL(5, 67, 19), // "on_okButton_pressed"
QT_MOC_LITERAL(6, 87, 23), // "on_cancelButton_pressed"
QT_MOC_LITERAL(7, 111, 27), // "on_testScreenButton_pressed"
QT_MOC_LITERAL(8, 139, 19) // "on_checkBox_clicked"

    },
    "SetupCanvas\0on_videoAdapterlist_itemClicked\0"
    "\0QListWidgetItem*\0item\0on_okButton_pressed\0"
    "on_cancelButton_pressed\0"
    "on_testScreenButton_pressed\0"
    "on_checkBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetupCanvas[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SetupCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetupCanvas *_t = static_cast<SetupCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_videoAdapterlist_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_okButton_pressed(); break;
        case 2: _t->on_cancelButton_pressed(); break;
        case 3: _t->on_testScreenButton_pressed(); break;
        case 4: _t->on_checkBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SetupCanvas::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetupCanvas.data,
      qt_meta_data_SetupCanvas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SetupCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetupCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SetupCanvas.stringdata0))
        return static_cast<void*>(const_cast< SetupCanvas*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetupCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
