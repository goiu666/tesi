/****************************************************************************
** Meta object code from reading C++ file 'decryption_form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tesi/decryption_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decryption_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_decryption_form_t {
    const uint offsetsAndSize[12];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_decryption_form_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_decryption_form_t qt_meta_stringdata_decryption_form = {
    {
QT_MOC_LITERAL(0, 15), // "decryption_form"
QT_MOC_LITERAL(16, 22), // "on_btn_decifra_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 23), // "on_btn_cancella_clicked"
QT_MOC_LITERAL(64, 29), // "on_cbo_alfabeto_textActivated"
QT_MOC_LITERAL(94, 4) // "arg1"

    },
    "decryption_form\0on_btn_decifra_clicked\0"
    "\0on_btn_cancella_clicked\0"
    "on_cbo_alfabeto_textActivated\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_decryption_form[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    0 /* Private */,
       3,    0,   33,    2, 0x08,    1 /* Private */,
       4,    1,   34,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void decryption_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<decryption_form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_decifra_clicked(); break;
        case 1: _t->on_btn_cancella_clicked(); break;
        case 2: _t->on_cbo_alfabeto_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject decryption_form::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_decryption_form.offsetsAndSize,
    qt_meta_data_decryption_form,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_decryption_form_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *decryption_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *decryption_form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_decryption_form.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int decryption_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
