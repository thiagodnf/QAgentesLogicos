#include <QtGui>
#include <QMessageBox>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qambientegui.h"
#include "qtestgui2.h"

#include "qagentesimples.h"
#include "qagentememoriaanterior.h"
#include "qagentecommemoria.h"
#include "qagenteguloso.h"
#include "qagenteinteligente.h"
#include "qtest.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);
    this->ambiente = 0;
    this->agente = 0;
    init();

}

void MainWindow::init()
{
    setWindowIcon(QIcon(":/resources/aspirador.png"));

    connect(ui->actionSobre,SIGNAL(triggered()),this,SLOT(exibirAbout()));
    connect(ui->actionNovoAmbiente,SIGNAL(triggered()),this,SLOT(criarNovoAmbiente()));
    connect(ui->actionExecutar,SIGNAL(triggered()),this,SLOT(executar()));
    connect(ui->actionParar,SIGNAL(triggered()),this,SLOT(stop()));
    connect(ui->actionResetar,SIGNAL(triggered()),this,SLOT(resetarAmbiente()));
    connect(ui->actionNovoAgenteSimples,SIGNAL(triggered()),this,SLOT(criarNovoAgenteSimples()));
    connect(ui->actionNovoAgenteMemoriaAnterior,SIGNAL(triggered()),this,SLOT(criarNovoAgenteMemoriaAnterior()));
    connect(ui->actionNovoAgenteMemoria,SIGNAL(triggered()),this,SLOT(criarNovoAgenteMemoria()));
    connect(ui->actionNovoAgenteGuloso,SIGNAL(triggered()),this,SLOT(criarNovoAgenteGuloso()));
    connect(ui->actionNovoAgenteInteligente,SIGNAL(triggered()),this,SLOT(criarNovoAgenteInteligente()));
    connect(ui->actionExecutarTestes,SIGNAL(triggered()),this,SLOT(executarTestes()));

    criarNovoAmbiente();

    this->ui->statusBar->showMessage("Seja bem vindo!");
}

MainWindow::~MainWindow()
{
    stop();
    delete ambiente;
}

void MainWindow::executar()
{
    if(ambiente->isRunning()){
        if(this->ambiente->pause) {
            this->ambiente->pause = false;
            ui->actionExecutar->setText("Pausar");
        }else{
            ui->actionExecutar->setText("Executar");
            this->ambiente->pause = true;
        }
    }else{
        this->ambiente->reset();
        this->ambiente->start();
        ui->actionExecutar->setText("Pausar");
    }
}

void MainWindow::resetarAmbiente()
{
    if(ambiente != 0)
    {
        ambiente->reset();
        stop();
        ambiente->update();
        atualizarStatusBarAndDebug("Ambiente resetado!");
    }
}

void MainWindow::stop()
{
    if(ambiente != 0){
        if(ambiente->isRunning()){
            ambiente->executar = false;
            ambiente->exit();
            atualizarStatusBarAndDebug("PARE!");
        }
    }
    ui->actionExecutar->setText("Executar");
}

void MainWindow::criarNovoAmbiente()
{
    stop();

    criarAgente(1);

    this->ambiente = new QAmbienteGUI(this->agente,10,10);

    this->ui->graphicsView->setScene(ambiente);
}

void MainWindow::criarAgente(int tipo)
{
    switch(tipo)
    {
        case 1: this->agente = new QAgenteSimples(); break;
        case 2: this->agente = new QAgenteMemoriaAnterior(); break;
        case 3: this->agente = new QAgenteComMemoria(); break;
        case 4: this->agente = new QAgenteGuloso(); break;
        case 5: this->agente = new QAgenteInteligente(this->ambiente->getSujeira()); break;
    }

    connect(this->agente,SIGNAL(atualizarInformacoes()),this,SLOT(atualizarInformacoes()));

    if(this->ambiente != 0)
        this->ambiente->setAgente(this->agente);

    resetarAmbiente();
}

void MainWindow::atualizarStatusBarAndDebug(QString texto)
{
    this->ui->statusBar->showMessage(texto);
    qDebug()<<texto;
}

void MainWindow::exibirAbout()
{
    QMessageBox::about(this,"Sobre",
                       QString::fromUtf8("<html><head></head><body><h1>QAgentes Lógicos</h1><br><br>"
                          "Universidade Estadual do Ceará - UECE<br>"
                          "Curso de Ciência da Computação<br>"
                          "<b>Fluxo:</b> 2011.2<br><br>"
                          "<b>Autor:</b> "
                          "Thiago do Nascimento Ferreira<br>"
                          "Site: <a href='www.thiagodnf.com'>www.thiagodnf.com</a></body></html>"));
}

void MainWindow::atualizarInformacoes()
{
    if(this->agente != 0){
        ui->labelAgentePosX->setText("PosX: "+QString::number(this->agente->getPosX()));
        ui->labelAgentePosY->setText("PosY: "+QString::number(this->agente->getPosY()));
        ui->labelInfoPassos->setText("Passos: "+QString::number(this->agente->getContadorDePassos()));
        ui->labelInfoPontos->setText("Pontos: "+QString::number(this->agente->getContadorDePontuacao()));
        ui->labelInfoSujeira->setText("Sujeira: "+QString::number(this->agente->getContadorDeSujeiraLimpa()));
        ui->pbBateriaAgente->setValue(this->agente->getBateria());
    }
}

void MainWindow::criarNovoAgenteSimples()
{
    criarAgente(1);
    atualizarStatusBarAndDebug("Agente Simples criado!");
}

void MainWindow::criarNovoAgenteMemoriaAnterior()
{
    criarAgente(2);
    atualizarStatusBarAndDebug("Agente com Memoria Anterior criado!");
}

void MainWindow::criarNovoAgenteMemoria()
{
    criarAgente(3);
    atualizarStatusBarAndDebug("Agente com Memoria criado!");
}

void MainWindow::criarNovoAgenteGuloso()
{
    criarAgente(4);
    atualizarStatusBarAndDebug("Agente Guloso criado!");
}

void MainWindow::criarNovoAgenteInteligente()
{
    criarAgente(5);
    atualizarStatusBarAndDebug("Agente Inteligente criado!");
}

void MainWindow::executarTestes(){

    QTestGui2* test = new QTestGui2(this);

    test->show();


    //QTest* test = new QTest(100,100);
    //test->executar();
}
