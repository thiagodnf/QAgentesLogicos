#include <QDebug>
#include <cmath>

#include "qagenteinteligente.h"

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

QAgenteInteligente::QAgenteInteligente(QVector<QPoint> sujeira): QAgente()
{
    this->sujeira = sujeira;  
}


QAgenteInteligente::Acao QAgenteInteligente::getAcao(int percepcao)
{
    QPoint sujeira = getSujeiraMaisProxima();

    Acao acaoAgente;

    if(percepcao == EstaSujo){
        this->sujeira.remove(this->sujeira.indexOf(sujeira));
        return Limpar;
    }


    if(sujeira.y() > getPosY()){
        if(sujeira.x() > getPosX()){
            acaoAgente = MoverParaDireita;
        }else if(sujeira.x() == getPosX()){
            acaoAgente = MoverParaBaixo;
        }else{
            acaoAgente = MoverParaEsquerda;
        }
    }else if(sujeira.y() == getPosY()){
        if(sujeira.x() > getPosX()){
            acaoAgente = MoverParaDireita;
        }else if(sujeira.x() == getPosX()){
            acaoAgente = Limpar;
        }else{
            acaoAgente = MoverParaEsquerda;
        }
    }else{
        if(sujeira.x() > getPosX()){
            acaoAgente = MoverParaDireita;
        }else if(sujeira.x() == getPosX()){
            acaoAgente = MoverParaCima;
        }else{
            acaoAgente = MoverParaEsquerda;
        }
    }

    return acaoAgente;
}

QPoint QAgenteInteligente::getSujeiraMaisProxima()
{
    QPoint resultado;
    double distancia = 999999999999;

    foreach(QPoint pos,this->sujeira){

        double distanciaAgenteSujeira = sqrt(pow((pos.x() - getPosX()),2)+pow((pos.y()-getPosY()),2));

        if(distanciaAgenteSujeira < distancia){
            distancia = distanciaAgenteSujeira;
            resultado = pos;
        }
    }

    return resultado;
}

bool QAgenteInteligente::end()
{
    return this->sujeira.isEmpty();
}

