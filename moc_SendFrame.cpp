/****************************************************************************
** Meta object code from reading C++ file 'SendFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/SendFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__SendFrame_t {
    QByteArrayData data[7];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletGui__SendFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletGui__SendFrame_t qt_meta_stringdata_WalletGui__SendFrame = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 19),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 15),
QT_MOC_LITERAL(4, 58, 17),
QT_MOC_LITERAL(5, 76, 6),
QT_MOC_LITERAL(6, 83, 11)
    },
    "WalletGui::SendFrame\0addRecipientClicked\0"
    "\0clearAllClicked\0mixinValueChanged\0"
    "_value\0sendClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__SendFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    1,   36,    2, 0x08,
       6,    0,   39,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void WalletGui::SendFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendFrame *_t = static_cast<SendFrame *>(_o);
        switch (_id) {
        case 0: _t->addRecipientClicked(); break;
        case 1: _t->clearAllClicked(); break;
        case 2: _t->mixinValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::SendFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__SendFrame.data,
      qt_meta_data_WalletGui__SendFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletGui::SendFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::SendFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__SendFrame.stringdata))
        return static_cast<void*>(const_cast< SendFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::SendFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
