/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "updateTime"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 31), // "on_videoAdapterlist_itemClicked"
QT_MOC_LITERAL(4, 55, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 72, 4), // "item"
QT_MOC_LITERAL(6, 77, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(7, 101, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(8, 125, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(9, 150, 27), // "on_testScreenButton_pressed"
QT_MOC_LITERAL(10, 178, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(11, 198, 27), // "on_timeEdit_userTimeChanged"
QT_MOC_LITERAL(12, 226, 4), // "time"
QT_MOC_LITERAL(13, 231, 22), // "on_play_Button_pressed"
QT_MOC_LITERAL(14, 254, 23), // "on_pause_Button_pressed"
QT_MOC_LITERAL(15, 278, 22), // "on_stop_Button_pressed"
QT_MOC_LITERAL(16, 301, 26), // "on_backward_Button_pressed"
QT_MOC_LITERAL(17, 328, 25), // "on_forward_Button_pressed"
QT_MOC_LITERAL(18, 354, 25), // "on_addImageButton_pressed"
QT_MOC_LITERAL(19, 380, 25), // "on_addVideoButton_pressed"
QT_MOC_LITERAL(20, 406, 25) // "on_addSoundButton_pressed"

    },
    "MainWindow\0updateTime\0\0"
    "on_videoAdapterlist_itemClicked\0"
    "QListWidgetItem*\0item\0on_actionLoad_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_testScreenButton_pressed\0"
    "on_checkBox_clicked\0on_timeEdit_userTimeChanged\0"
    "time\0on_play_Button_pressed\0"
    "on_pause_Button_pressed\0on_stop_Button_pressed\0"
    "on_backward_Button_pressed\0"
    "on_forward_Button_pressed\0"
    "on_addImageButton_pressed\0"
    "on_addVideoButton_pressed\0"
    "on_addSoundButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    1,   95,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTime(); break;
        case 1: _t->on_videoAdapterlist_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_actionLoad_triggered(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->on_testScreenButton_pressed(); break;
        case 6: _t->on_checkBox_clicked(); break;
        case 7: _t->on_timeEdit_userTimeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 8: _t->on_play_Button_pressed(); break;
        case 9: _t->on_pause_Button_pressed(); break;
        case 10: _t->on_stop_Button_pressed(); break;
        case 11: _t->on_backward_Button_pressed(); break;
        case 12: _t->on_forward_Button_pressed(); break;
        case 13: _t->on_addImageButton_pressed(); break;
        case 14: _t->on_addVideoButton_pressed(); break;
        case 15: _t->on_addSoundButton_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
