#define QTDEPONTOS_SUJEIRA 10
#define QTDEPONTOS_MOVIMENTO 1

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


#include <QDebug>

#include "qagente.h"
#include "qambiente.h"

QAgente::QAgente()
{    
    this->MAX_PASSOS = 200;
    this->reset();
}

void QAgente::reset()
{    
    this->posX = 0;
    this->posY = 0;
    this->contadorDePassos = 0;
    this->contadorDePontos = 0;
    this->contadorDeSujeiraLimpa = 0;
}

int QAgente::getPosX()
{
    return this->posX;
}

int QAgente::getPosY()
{
    return this->posY;
}

int QAgente::getContadorDePassos()
{
    return this->contadorDePassos;
}

int QAgente::getContadorDeSujeiraLimpa()
{
    return this->contadorDeSujeiraLimpa;
}

int QAgente::getContadorDePontuacao()
{    
    return this->contadorDePontos;
}

QAgente::Acao QAgente::escolherAcaoRandomicamente(QVector<Acao> listaDeOpcoes)
{
    if(listaDeOpcoes.isEmpty()){
        qDebug()<<"Lista de Opções está vazia";
        throw "Lista de Opções está vazia";
    }

    int tamanhoOpcoes = listaDeOpcoes.size();

    int posicao = (rand() % tamanhoOpcoes) + 1;

    return listaDeOpcoes.value(posicao-1);
}

void QAgente::limpar(QAmbiente *ambiente)
{
    ambiente->setStatus(getPosX(),getPosY(),0);
    contadorDeSujeiraLimpa++;
    contadorDePontos += QTDEPONTOS_SUJEIRA;
}

void QAgente::efetuadores(QAmbiente* ambiente,Acao acao)
{
    ambiente->setStatus(getPosX(),getPosY(),1);
    contadorDePassos++;

    switch(acao){
        case Limpar:
            this->contadorDePassos--;
            limpar(ambiente);
            break;
        case MoverParaCima:
            this->moverParaCima();
            this->contadorDePontos += -QTDEPONTOS_MOVIMENTO;
            break;
        case MoverParaBaixo:
            this->moverParaBaixo();
            this->contadorDePontos += -QTDEPONTOS_MOVIMENTO;
            break;
        case MoverParaDireita:
            this->moverParaDireita();
            this->contadorDePontos += -QTDEPONTOS_MOVIMENTO;
            break;
        case MoverParaEsquerda:
            this->moverParaEsquerda();
            this->contadorDePontos += -QTDEPONTOS_MOVIMENTO;
            break;
        default:
            this->contadorDePassos--;
            qDebug("Agente não fez nada");
    }

    emit atualizarInformacoes();
}

void QAgente::moverParaDireita(void)
{
    this->posX++;
}

void QAgente::moverParaEsquerda(void)
{
    this->posX--;
}

void QAgente::moverParaCima(void)
{
    this->posY--;
}

void QAgente::moverParaBaixo(void)
{
    this->posY++;
}

QAgente::Acao QAgente::getAcao(int percepcao)
{
    Q_UNUSED(percepcao);
    return FazerNada;
}

int QAgente::getBateria()
{
    if(this->contadorDePassos == 0)
        return 100;
    else
        return 100-(100*this->contadorDePassos)/MAX_PASSOS;
}

bool QAgente::end()
{
    return this->contadorDePassos == MAX_PASSOS;
}
