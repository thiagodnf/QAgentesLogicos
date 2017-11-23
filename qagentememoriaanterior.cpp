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

#include "qagentesimples.h"
#include "qagentememoriaanterior.h"

QAgenteMemoriaAnterior::QAgenteMemoriaAnterior():QAgente()
{
     this->reset();
}

void QAgenteMemoriaAnterior::reset()
{
    QAgente::reset();
    this->memoria = QPoint(-1,-1);
}

QAgente::Acao QAgenteMemoriaAnterior::getAcao(int percepcao)
{
    Acao acaoAgente = FazerNada;

    QVector<Acao> opcoes;

    /*Saida do Agente*/
    if(memoria == QPoint(-1,-1)){
        opcoes<<MoverParaBaixo<<MoverParaDireita;
        acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
    }else{
        //qDebug()<<memoria;

        switch(percepcao){
            case EstaSujo:
                acaoAgente = Limpar;
                break;
            case ParedeEmCimaNaEsquerda:
                if(movimentoDireitaEsquerda()) acaoAgente = MoverParaBaixo;
                if(movimentoBaixoCima()) acaoAgente = MoverParaDireita;
                break;
            case ParedeEmCimaNaDireita:
                if(movimentoEsquerdaDireita()) acaoAgente = MoverParaBaixo;
                if(movimentoBaixoCima()) acaoAgente = MoverParaEsquerda;
                break;
            case ParedeEmBaixoNaEsquerda:
                if(movimentoDireitaEsquerda()) acaoAgente = MoverParaCima;
                if(movimentoCimaBaixo()) acaoAgente = MoverParaDireita;
                break;
            case ParedeEmBaixoNaDireita:
                if(movimentoEsquerdaDireita()) acaoAgente = MoverParaCima;
                if(movimentoCimaBaixo()) acaoAgente = MoverParaEsquerda;
                break;
            case ParedeEmCima:
                if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaDireita;
                if(movimentoBaixoCima()) opcoes<<MoverParaEsquerda<<MoverParaDireita;
                if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaEsquerda;
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeNaEsquerda:
                if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaDireita;
                if(movimentoBaixoCima()) opcoes<<MoverParaDireita<<MoverParaCima;
                if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaCima;
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeNaDireita:
                if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaEsquerda;
                if(movimentoBaixoCima()) opcoes<<MoverParaEsquerda<<MoverParaCima;
                if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaCima;
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeEmBaixo:
                if(movimentoCimaBaixo()) opcoes<<MoverParaDireita<<MoverParaEsquerda;
                if(movimentoDireitaEsquerda()) opcoes<<MoverParaEsquerda<<MoverParaCima;
                if(movimentoEsquerdaDireita()) opcoes<<MoverParaDireita<<MoverParaCima;
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case NadaPerto:
                if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaDireita<<MoverParaEsquerda;
                if(movimentoBaixoCima()) opcoes<<MoverParaDireita<<MoverParaCima<<MoverParaEsquerda;
                if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaCima<<MoverParaEsquerda;
                if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaCima<<MoverParaDireita;
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            default:
                acaoAgente = FazerNada;

        }

    }



    return acaoAgente;
}

void QAgenteMemoriaAnterior::moverParaDireita(void)
{
    memorizar();
    QAgente::moverParaDireita();
}

void QAgenteMemoriaAnterior::moverParaEsquerda(void)
{
    memorizar();
    QAgente::moverParaEsquerda();
}

void QAgenteMemoriaAnterior::moverParaCima(void)
{
    memorizar();
    QAgente::moverParaCima();
}

void QAgenteMemoriaAnterior::moverParaBaixo(void)
{
    memorizar();
    QAgente::moverParaBaixo();
}

void QAgenteMemoriaAnterior::memorizar()
{
    memoria.setY(QAgente::getPosY());
    memoria.setX(QAgente::getPosX());
}

bool QAgenteMemoriaAnterior::movimentoEsquerdaDireita()
{
    return memoria.x() < QAgente::getPosX();
}

bool QAgenteMemoriaAnterior::movimentoDireitaEsquerda()
{
    return memoria.x() > QAgente::getPosX();
}

bool QAgenteMemoriaAnterior::movimentoCimaBaixo()
{
    return memoria.y() < QAgente::getPosY();
}

bool QAgenteMemoriaAnterior::movimentoBaixoCima()
{
    return memoria.y() > QAgente::getPosY();
}


