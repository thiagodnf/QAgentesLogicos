#define EstaSujo 1
#define ParedeEmCima 2
#define ParedeEmBaixo 3
#define ParedeNaDireita 4
#define ParedeNaEsquerda 5
#define NadaPerto 6
#define ParedeEmCimaNaDireita 7
#define ParedeEmCimaNaEsquerda 8
#define ParedeEmBaixoNaDireita 9
#define ParedeEmBaixoNaEsquerda 10

#include <cstdlib>
#include <QDebug>

#include "qambiente.h"
#include "qagente.h"

QAmbiente::QAmbiente(QAgente* agente,int largura,int altura)
{
    this->agente = agente;
    this->larguraAmbiente = largura;
    this->alturaAmbiente = altura;
    this->init();
    this->executar = true;
    this->pause = false;
    this->teste = false;
}

void QAmbiente::init(void)
{
    this->matrizAmbiente = new int*[getAltura()];
    for(int i=0;i<getAltura();i++)
        matrizAmbiente[i] = new int[getLargura()];

    for(int y=0;y<getAltura();y++)
        for(int x=0;x<getLargura();x++)
            matrizAmbiente[y][x] = 0;

    /*Atribui sujeira ao ambiente*/
    int quantidadeDeSujeira = (getAltura()*getLargura())*0.2;

    for(int i=0;i<quantidadeDeSujeira;i++){
        while(true){
            int x = (rand() % (getLargura()-1)) + 0;
            int y = (rand() % (getAltura()-1)) + 0;
            if( matrizAmbiente[y][x] == 0){
                sujeira << QPoint(x,y);
                matrizAmbiente[y][x] = 2;
                break;
            }
        }
    }
}

QVector<QPoint> QAmbiente::getSujeira()
{
    return this->sujeira;
}

void QAmbiente::reset()
{
    for(int y=0;y<getAltura();y++)
        for(int x=0;x<getLargura();x++)
            matrizAmbiente[y][x] = 0;

    foreach(QPoint pos,sujeira){
        this->matrizAmbiente[pos.y()][pos.x()] = 2;
    }

    this->executar = true;
    this->agente->reset();
}

void QAmbiente::setAgente(QAgente* agente)
{
    this->agente = agente;
    this->executar = true;
}

int QAmbiente::getAltura(void)
{
    return this->alturaAmbiente;
}

int QAmbiente::getLargura(void)
{
    return this->larguraAmbiente;
}

bool QAmbiente::temParedeEmCima(int y)
{
    return y == 0;
}

bool QAmbiente::temParedeEmBaixo(int y)
{
    return y+1 == getAltura();
}

bool QAmbiente::temParedeNaDireita(int x)
{
    return x+1 == getLargura();
}

bool QAmbiente::temParedeNaEsquerda(int x)
{
    return x == 0;
}

bool QAmbiente::estaSujo(int x,int y)
{
    return matrizAmbiente[y][x] == 2;
}

void QAmbiente::setStatus(int x,int y,int status)
{
    this->matrizAmbiente[y][x] = status;
}

int QAmbiente::getPercepcao(int x, int y)
{
    if(estaSujo(x,y)){
        return EstaSujo;
    }
    if(temParedeEmCima(y) && temParedeNaEsquerda(x)){
        return ParedeEmCimaNaEsquerda;
    }
    if(temParedeEmCima(y) && temParedeNaDireita(x)){
        return ParedeEmCimaNaDireita;
    }
    if(temParedeEmBaixo(y) && temParedeNaEsquerda(x)){
        return ParedeEmBaixoNaEsquerda;
    }
    if(temParedeEmBaixo(y) && temParedeNaDireita(x)){
        return ParedeEmBaixoNaDireita;
    }
    if(temParedeEmCima(y)) return ParedeEmCima;
    if(temParedeEmBaixo(y)) return ParedeEmBaixo;
    if(temParedeNaDireita(x)) return ParedeNaDireita;
    if(temParedeNaEsquerda(x)) return ParedeNaEsquerda;

    return NadaPerto;
}

void QAmbiente::run()
{
    qDebug()<<"Agente Comecou";

    while(!agente->end() && this->executar){

        while(pause){
            sleep(1);
        }

        int percepcao = getPercepcao(agente->getPosX(),agente->getPosY());

        QAgente::Acao acao = agente->getAcao(percepcao);

        agente->efetuadores(this,acao);

        update();
    }

    qDebug()<<"Agente Terminou";
}

void QAmbiente::update()
{
    if(!teste)
        msleep(400);
}


