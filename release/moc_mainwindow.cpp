/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Dec 18 19:29:50 2011
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      23,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     140,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,
     189,   11,   11,   11, 0x08,
     218,   11,   11,   11, 0x08,
     241,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0executar()\0stop()\0"
    "exibirAbout()\0criarNovoAmbiente()\0"
    "resetarAmbiente()\0criarNovoAgenteSimples()\0"
    "criarNovoAgenteMemoriaAnterior()\0"
    "criarNovoAgenteMemoria()\0"
    "criarNovoAgenteGuloso()\0"
    "criarNovoAgenteInteligente()\0"
    "atualizarInformacoes()\0executarTestes()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->executar(); break;
        case 1: _t->stop(); break;
        case 2: _t->exibirAbout(); break;
        case 3: _t->criarNovoAmbiente(); break;
        case 4: _t->resetarAmbiente(); break;
        case 5: _t->criarNovoAgenteSimples(); break;
        case 6: _t->criarNovoAgenteMemoriaAnterior(); break;
        case 7: _t->criarNovoAgenteMemoria(); break;
        case 8: _t->criarNovoAgenteGuloso(); break;
        case 9: _t->criarNovoAgenteInteligente(); break;
        case 10: _t->atualizarInformacoes(); break;
        case 11: _t->executarTestes(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
