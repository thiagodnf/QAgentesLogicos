#include "qtestgui2.h"
#include "ui_qtestgui2.h"

#include <iostream>
#include "qtest.h"

using namespace std;

QTestGui2::QTestGui2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QTestGui2)
{
    ui->setupUi(this);

    connect(ui->pushButtonExecutar,SIGNAL(clicked()),this,SLOT(run()));
}

QTestGui2::~QTestGui2()
{
    delete ui;
}

void QTestGui2::run(){
    cout <<"Executando..."<<endl;

    int largura = ui->spinBoxLargura->text().toInt();
    int altura = ui->spinBoxAltura->text().toInt();;
    int porcentagemDeSujeira = ui->spinBoxPorcentagemDeSujeira->text().toInt();;
    int repeticoes = ui->spinBoxRepeticoes->text().toInt();;

    cout<<"Informações Gerais:"<<endl;
    cout<<"Largura: "<<largura<<endl;
    cout<<"Altura: "<<altura<<endl;
    cout<<"Porcentagem de Sujeira: "<<porcentagemDeSujeira<<endl;
    cout<<"Repeticoes: "<<repeticoes<<endl;

    QList<int> agentesSelecionados;

    if(ui->checkBoxAgenteSimples->isChecked()) agentesSelecionados<<1;
    if(ui->checkBoxAgenteMemoriaAnterior->isChecked()) agentesSelecionados<<2;
    if(ui->checkBoxAgenteGuloso->isChecked()) agentesSelecionados<<3;
    if(ui->checkBoxAgenteInteligente->isChecked()) agentesSelecionados<<4;

    cout<<"Quantidade de Agentes selecionados: "<<agentesSelecionados.size()<<endl;

    QTest* test = new QTest(altura,largura,agentesSelecionados,porcentagemDeSujeira,repeticoes);

    test->start();
}
