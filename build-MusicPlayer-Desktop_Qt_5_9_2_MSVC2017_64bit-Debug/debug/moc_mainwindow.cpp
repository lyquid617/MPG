/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MusicPlayer/View/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_skipforward_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "on_Pause_clicked"
QT_MOC_LITERAL(4, 52, 23), // "on_skipbackward_clicked"
QT_MOC_LITERAL(5, 76, 19), // "on_playlist_clicked"
QT_MOC_LITERAL(6, 96, 19), // "on_addMusic_clicked"
QT_MOC_LITERAL(7, 116, 22), // "on_deleteMusic_clicked"
QT_MOC_LITERAL(8, 139, 32), // "on_positionSlider_sliderReleased"
QT_MOC_LITERAL(9, 172, 17), // "on_volume_clicked"
QT_MOC_LITERAL(10, 190, 30), // "on_volumeSlider_sliderReleased"
QT_MOC_LITERAL(11, 221, 26), // "on_local_cellDoubleClicked"
QT_MOC_LITERAL(12, 248, 3), // "row"
QT_MOC_LITERAL(13, 252, 6), // "column"
QT_MOC_LITERAL(14, 259, 19), // "on_playmode_clicked"
QT_MOC_LITERAL(15, 279, 10), // "updateInfo"
QT_MOC_LITERAL(16, 290, 17), // "updatePauseButton"
QT_MOC_LITERAL(17, 308, 20), // "on_local_cellClicked"
QT_MOC_LITERAL(18, 329, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(19, 361, 10) // "currentRow"

    },
    "MainWindow\0on_skipforward_clicked\0\0"
    "on_Pause_clicked\0on_skipbackward_clicked\0"
    "on_playlist_clicked\0on_addMusic_clicked\0"
    "on_deleteMusic_clicked\0"
    "on_positionSlider_sliderReleased\0"
    "on_volume_clicked\0on_volumeSlider_sliderReleased\0"
    "on_local_cellDoubleClicked\0row\0column\0"
    "on_playmode_clicked\0updateInfo\0"
    "updatePauseButton\0on_local_cellClicked\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    2,   98,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    2,  106,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_skipforward_clicked(); break;
        case 1: _t->on_Pause_clicked(); break;
        case 2: _t->on_skipbackward_clicked(); break;
        case 3: _t->on_playlist_clicked(); break;
        case 4: _t->on_addMusic_clicked(); break;
        case 5: _t->on_deleteMusic_clicked(); break;
        case 6: _t->on_positionSlider_sliderReleased(); break;
        case 7: _t->on_volume_clicked(); break;
        case 8: _t->on_volumeSlider_sliderReleased(); break;
        case 9: _t->on_local_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_playmode_clicked(); break;
        case 11: _t->updateInfo(); break;
        case 12: _t->updatePauseButton(); break;
        case 13: _t->on_local_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
