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

#include "qagenteguloso.h"

QAgenteGuloso::QAgenteGuloso():QAgenteComMemoria()
{
    this->reset();
}

void QAgenteGuloso::reset()
{
    QAgenteComMemoria::reset();
}

QAgente::Acao QAgenteGuloso::getAcao(int percepcao)
{
    Acao acaoAgente = FazerNada;

    QVector<Acao> opcoes;

    /*Saida do Agente*/
    if(memoriaVazia()){
        opcoes<<MoverParaBaixo<<MoverParaDireita;
        acaoAgente = QAgente::escolherAcaoRandomicamente(opcoes);
    }else{

        switch(percepcao){
            case EstaSujo:
                acaoAgente = Limpar;
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
                if(movimentoEsquerdaDireita()){
                    if(visitouCasaADireita()) acaoAgente = MoverParaBaixo;
                    else acaoAgente = MoverParaDireita;
                }
                if(movimentoDireitaEsquerda()){
                    if(visitouCasaAEsquerda()) acaoAgente = MoverParaBaixo;
                    else acaoAgente = MoverParaEsquerda;
                }
                break;
            case ParedeEmBaixo:
                if(movimentoDireitaEsquerda()){
                    if(visitouCasaAEsquerda()) acaoAgente = MoverParaCima;
                    else acaoAgente = MoverParaEsquerda;
                }
                if(movimentoEsquerdaDireita()){
                    if(visitouCasaADireita()) acaoAgente = MoverParaCima;
                    else acaoAgente = MoverParaDireita;
                }
                break;
            case ParedeNaEsquerda:
                if(movimentoBaixoCima()){
                    if(visitouCasaEmCima()) acaoAgente = MoverParaDireita;
                    else acaoAgente = MoverParaCima;
                }
                if(movimentoCimaBaixo()){
                    if(visitouCasaEmBaixo()) acaoAgente = MoverParaDireita;
                    else acaoAgente = MoverParaBaixo;
                }
                break;
            case ParedeNaDireita:
                if(movimentoCimaBaixo()){
                    if(visitouCasaEmBaixo()) acaoAgente = MoverParaEsquerda;
                    else acaoAgente = MoverParaBaixo;
                }
                if(movimentoBaixoCima()){
                    if(visitouCasaEmCima()) acaoAgente = MoverParaEsquerda;
                    else acaoAgente = MoverParaCima;
                }
                break;
            case NadaPerto:
                if(visitouCasaAEsquerda() && visitouCasaADireita() && visitouCasaEmCima() && visitouCasaEmBaixo()){
                    return FazerNada;
                }
                if(movimentoEsquerdaDireita()){
                    if(visitouCasaEmCima() || visitouCasaEmBaixo()) acaoAgente = MoverParaDireita;
                    if(visitouCasaADireita()){
                        if(visitouCasaEmBaixo()) acaoAgente = MoverParaCima;
                        else acaoAgente = MoverParaBaixo;
                    }
                }
                if(movimentoCimaBaixo()){
                    if(visitouCasaADireita() || visitouCasaAEsquerda()) acaoAgente = MoverParaBaixo;
                    if(visitouCasaEmBaixo()){
                        if(visitouCasaADireita()) acaoAgente = MoverParaEsquerda;
                        else acaoAgente = MoverParaDireita;
                    }
                }
                if(movimentoDireitaEsquerda()){
                    if(visitouCasaEmBaixo() || visitouCasaEmCima()) acaoAgente = MoverParaEsquerda;
                    if(visitouCasaAEsquerda()){
                        if(visitouCasaEmCima()) acaoAgente = MoverParaBaixo;
                        else acaoAgente = MoverParaCima;
                    }
                }
                if(movimentoBaixoCima()){
                    if(visitouCasaAEsquerda() || visitouCasaADireita()) acaoAgente = MoverParaCima;
                    if(visitouCasaEmCima()){
                        if(visitouCasaADireita()) acaoAgente = MoverParaEsquerda;
                        else acaoAgente = MoverParaDireita;
                    }
                }
                break;
            default:
                acaoAgente = FazerNada;

        }

    }

    return acaoAgente;
}

bool QAgenteGuloso::end()
{
    return getContadorDePassos() >= MAX_PASSOS/2-1;
}
