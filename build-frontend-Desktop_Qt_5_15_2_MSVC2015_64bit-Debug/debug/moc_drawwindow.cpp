/****************************************************************************
** Meta object code from reading C++ file 'drawwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../frontend/drawwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawWindow_t {
    QByteArrayData data[19];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawWindow_t qt_meta_stringdata_DrawWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DrawWindow"
QT_MOC_LITERAL(1, 11, 8), // "DrawSlot"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 36, 5), // "Reply"
QT_MOC_LITERAL(5, 42, 17), // "UpdateBalanceSlot"
QT_MOC_LITERAL(6, 60, 19), // "PostTransactionSlot"
QT_MOC_LITERAL(7, 80, 18), // "on_Btn_20e_clicked"
QT_MOC_LITERAL(8, 99, 18), // "on_Btn_40e_clicked"
QT_MOC_LITERAL(9, 118, 18), // "on_Btn_60e_clicked"
QT_MOC_LITERAL(10, 137, 18), // "on_Btn_90e_clicked"
QT_MOC_LITERAL(11, 156, 19), // "on_Btn_120e_clicked"
QT_MOC_LITERAL(12, 176, 19), // "on_Btn_140e_clicked"
QT_MOC_LITERAL(13, 196, 17), // "on_Btn_Ok_clicked"
QT_MOC_LITERAL(14, 214, 19), // "on_Btn_Exit_clicked"
QT_MOC_LITERAL(15, 234, 10), // "CheckMoney"
QT_MOC_LITERAL(16, 245, 3), // "bal"
QT_MOC_LITERAL(17, 249, 2), // "am"
QT_MOC_LITERAL(18, 252, 13) // "HandleTimeOut"

    },
    "DrawWindow\0DrawSlot\0\0QNetworkReply*\0"
    "Reply\0UpdateBalanceSlot\0PostTransactionSlot\0"
    "on_Btn_20e_clicked\0on_Btn_40e_clicked\0"
    "on_Btn_60e_clicked\0on_Btn_90e_clicked\0"
    "on_Btn_120e_clicked\0on_Btn_140e_clicked\0"
    "on_Btn_Ok_clicked\0on_Btn_Exit_clicked\0"
    "CheckMoney\0bal\0am\0HandleTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       7,    0,   88,    2, 0x08 /* Private */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    2,   96,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   16,   17,
    QMetaType::Void,

       0        // eod
};

void DrawWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DrawSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->UpdateBalanceSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->PostTransactionSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->on_Btn_20e_clicked(); break;
        case 4: _t->on_Btn_40e_clicked(); break;
        case 5: _t->on_Btn_60e_clicked(); break;
        case 6: _t->on_Btn_90e_clicked(); break;
        case 7: _t->on_Btn_120e_clicked(); break;
        case 8: _t->on_Btn_140e_clicked(); break;
        case 9: _t->on_Btn_Ok_clicked(); break;
        case 10: _t->on_Btn_Exit_clicked(); break;
        case 11: _t->CheckMoney((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->HandleTimeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DrawWindow.data,
    qt_meta_data_DrawWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DrawWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
