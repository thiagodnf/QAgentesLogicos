/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Dec 12 09:57:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
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

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
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
        switch (_id) {
        case 0: executar(); break;
        case 1: stop(); break;
        case 2: exibirAbout(); break;
        case 3: criarNovoAmbiente(); break;
        case 4: resetarAmbiente(); break;
        case 5: criarNovoAgenteSimples(); break;
        case 6: criarNovoAgenteMemoriaAnterior(); break;
        case 7: criarNovoAgenteMemoria(); break;
        case 8: criarNovoAgenteGuloso(); break;
        case 9: criarNovoAgenteInteligente(); break;
        case 10: atualizarInformacoes(); break;
        case 11: executarTestes(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
