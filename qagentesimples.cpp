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

QAgenteSimples::QAgenteSimples():QAgente()
{
}

QAgente::Acao QAgenteSimples::getAcao(int percepcao)
{    
    Acao acaoAgente;

    QVector<Acao> opcoes;

    switch(percepcao){
        case ParedeEmCimaNaEsquerda:
            opcoes<<MoverParaBaixo<<MoverParaDireita;
            acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeEmCimaNaDireita:
            opcoes<<MoverParaBaixo<<MoverParaEsquerda;
            acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeEmBaixoNaEsquerda:
            opcoes<<MoverParaCima<<MoverParaDireita;
            acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeEmBaixoNaDireita:
            opcoes<<MoverParaCima<<MoverParaEsquerda;
            acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeNaDireita:
            opcoes<<MoverParaCima<<MoverParaBaixo<<MoverParaEsquerda;
            acaoAgente = escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeNaEsquerda:
            opcoes<<MoverParaCima<<MoverParaBaixo<<MoverParaDireita;
            acaoAgente = escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeEmCima:
            opcoes<<MoverParaBaixo<<MoverParaDireita<<MoverParaEsquerda;
            acaoAgente = escolherAcaoRandomicamente(opcoes);
            break;
        case ParedeEmBaixo:
            opcoes<<MoverParaCima<<MoverParaDireita<<MoverParaEsquerda;
            acaoAgente = escolherAcaoRandomicamente(opcoes);
            break;
        case EstaSujo:
            acaoAgente = Limpar;
            break;
        case NadaPerto:
            opcoes<<MoverParaCima<<MoverParaBaixo<<MoverParaDireita<<MoverParaEsquerda;
            acaoAgente = escolherAcaoRandomicamente(opcoes);
            break;
        default:
            return FazerNada;
    }

     //qDebug()<<"Passos: "<<getContadorDePassos()<<"-"<<MAX_PASSOS;

    return acaoAgente;
}
