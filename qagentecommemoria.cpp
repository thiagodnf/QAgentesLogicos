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

#include "qagentecommemoria.h"

QAgenteComMemoria::QAgenteComMemoria():QAgenteMemoriaAnterior()
{
    this->reset();
}

void QAgenteComMemoria::reset()
{
    memoria.clear();
    QAgenteMemoriaAnterior::reset();
}

QAgente::Acao QAgenteComMemoria::getAcao(int percepcao)
{
    Acao acaoAgente = FazerNada;

    QVector<Acao> opcoes;

    /*Saida do Agente*/
    if(memoria.isEmpty()){
        opcoes<<MoverParaBaixo<<MoverParaDireita;
        acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
    }else{
        switch(percepcao){
            case EstaSujo:
                acaoAgente = Limpar;
                break;
            case ParedeEmCimaNaEsquerda:
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(visitouCasaEmBaixo()&&visitouCasaADireita()){
                    if(movimentoDireitaEsquerda()) acaoAgente = MoverParaBaixo;
                    if(movimentoBaixoCima()) acaoAgente = MoverParaDireita;
                }else{
                    acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                }
                break;
            case ParedeEmCimaNaDireita:
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmBaixo() && visitouCasaAEsquerda()){
                    if(movimentoEsquerdaDireita()) acaoAgente = MoverParaBaixo;
                    if(movimentoBaixoCima()) acaoAgente = MoverParaEsquerda;
                }else{
                    acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                }
                break;
            case ParedeEmBaixoNaEsquerda:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(visitouCasaEmCima()&&visitouCasaADireita()){
                    if(movimentoDireitaEsquerda()) acaoAgente = MoverParaCima;
                    if(movimentoCimaBaixo()) acaoAgente = MoverParaDireita;
                }else{
                    acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                }
                break;
            case ParedeEmBaixoNaDireita:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmCima()&&visitouCasaAEsquerda()){
                    if(movimentoEsquerdaDireita()) acaoAgente = MoverParaCima;
                    if(movimentoCimaBaixo()) acaoAgente = MoverParaEsquerda;
                }else{
                    acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                }
                break;
            case ParedeEmCima:
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmBaixo()&&visitouCasaADireita()&&visitouCasaAEsquerda()){
                    if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaDireita;
                    if(movimentoBaixoCima()) opcoes<<MoverParaEsquerda<<MoverParaDireita;
                    if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaEsquerda;
                }
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeNaEsquerda:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(visitouCasaEmCima()&&visitouCasaEmBaixo()&&visitouCasaADireita()){
                    if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaDireita;
                    if(movimentoBaixoCima()) opcoes<<MoverParaDireita<<MoverParaCima;
                    if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaCima;
                }
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeNaDireita:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmCima()&&visitouCasaEmBaixo()&&visitouCasaAEsquerda()){
                    if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaEsquerda;
                    if(movimentoBaixoCima()) opcoes<<MoverParaEsquerda<<MoverParaCima;
                    if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaCima;
                }
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case ParedeEmBaixo:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmCima()&&visitouCasaADireita()&&visitouCasaAEsquerda()){
                    if(movimentoCimaBaixo()) opcoes<<MoverParaDireita<<MoverParaEsquerda;
                    if(movimentoDireitaEsquerda()) opcoes<<MoverParaEsquerda<<MoverParaCima;
                    if(movimentoEsquerdaDireita()) opcoes<<MoverParaDireita<<MoverParaCima;
                }
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            case NadaPerto:
                if(!visitouCasaEmCima()) opcoes << MoverParaCima;
                if(!visitouCasaEmBaixo()) opcoes << MoverParaBaixo;
                if(!visitouCasaADireita()) opcoes << MoverParaDireita;
                if(!visitouCasaAEsquerda()) opcoes << MoverParaEsquerda;
                if(visitouCasaEmCima() && visitouCasaEmBaixo() && visitouCasaADireita() && visitouCasaAEsquerda()){
                    if(movimentoCimaBaixo()) opcoes<<MoverParaBaixo<<MoverParaDireita<<MoverParaEsquerda;
                    if(movimentoBaixoCima()) opcoes<<MoverParaDireita<<MoverParaCima<<MoverParaEsquerda;
                    if(movimentoDireitaEsquerda()) opcoes<<MoverParaBaixo<<MoverParaCima<<MoverParaEsquerda;
                    if(movimentoEsquerdaDireita()) opcoes<<MoverParaBaixo<<MoverParaCima<<MoverParaDireita;
                }
                acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
                break;
            default:
                acaoAgente = FazerNada;

        }


    }

    //qDebug()<<"Passos: "<<getContadorDePassos()<<"-"<<MAX_PASSOS;

    return acaoAgente;
}

void QAgenteComMemoria::memorizar()
{
    if(!memoria.contains(QPointF(getPosX(),getPosY()))){
        memoria.append(QPointF(getPosX(),getPosY()));
        QAgenteMemoriaAnterior::memorizar();
    }
}

bool QAgenteComMemoria::visitouCasaEmCima(void)
{
    return memoria.contains(QPointF(getPosX(),getPosY()-1));
}

bool QAgenteComMemoria::visitouCasaEmBaixo()
{
    return memoria.contains(QPointF(getPosX(),getPosY()+1));
}

bool QAgenteComMemoria::visitouCasaADireita()
{
    return memoria.contains(QPointF(getPosX()+1,getPosY()));
}

bool QAgenteComMemoria::visitouCasaAEsquerda()
{
    return memoria.contains(QPointF(getPosX()-1,getPosY()));
}

bool QAgenteComMemoria::memoriaVazia()
{
    return memoria.isEmpty();
}
