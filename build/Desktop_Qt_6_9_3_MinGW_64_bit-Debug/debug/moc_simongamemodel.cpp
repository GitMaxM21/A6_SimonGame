/****************************************************************************
** Meta object code from reading C++ file 'simongamemodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../simongamemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simongamemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14SimonGameModelE_t {};
} // unnamed namespace

template <> constexpr inline auto SimonGameModel::qt_create_metaobjectdata<qt_meta_tag_ZN14SimonGameModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SimonGameModel",
        "enableStateChanged",
        "",
        "isRunning",
        "lightUpButton",
        "color",
        "enableButtonsStateChanged",
        "isComputerTurn",
        "setGameText",
        "text",
        "updateProgressBar",
        "percentComplete",
        "spawnBigBox",
        "startGame",
        "update",
        "handlePlayerInput",
        "resetBigBox"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enableStateChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'lightUpButton'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'enableButtonsStateChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'setGameText'
        QtMocHelpers::SignalData<void(QString)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'updateProgressBar'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Signal 'spawnBigBox'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startGame'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handlePlayerInput'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetBigBox'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SimonGameModel, qt_meta_tag_ZN14SimonGameModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SimonGameModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SimonGameModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SimonGameModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SimonGameModelE_t>.metaTypes,
    nullptr
} };

void SimonGameModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SimonGameModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enableStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->lightUpButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->enableButtonsStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setGameText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->updateProgressBar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->spawnBigBox(); break;
        case 6: _t->startGame(); break;
        case 7: _t->update(); break;
        case 8: _t->handlePlayerInput(); break;
        case 9: _t->resetBigBox(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)(bool )>(_a, &SimonGameModel::enableStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)(QString )>(_a, &SimonGameModel::lightUpButton, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)(bool )>(_a, &SimonGameModel::enableButtonsStateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)(QString )>(_a, &SimonGameModel::setGameText, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)(int )>(_a, &SimonGameModel::updateProgressBar, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimonGameModel::*)()>(_a, &SimonGameModel::spawnBigBox, 5))
            return;
    }
}

const QMetaObject *SimonGameModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonGameModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SimonGameModelE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimonGameModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SimonGameModel::enableStateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SimonGameModel::lightUpButton(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SimonGameModel::enableButtonsStateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SimonGameModel::setGameText(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void SimonGameModel::updateProgressBar(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void SimonGameModel::spawnBigBox()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
