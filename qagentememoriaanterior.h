#ifndef QAGENTEMEMORIAANTERIOR_H
#define QAGENTEMEMORIAANTERIOR_H

#include <QPoint>

#include "qagente.h"


class QAgenteMemoriaAnterior: public QAgente
{
    QPoint memoria;
public:
    QAgenteMemoriaAnterior();
    virtual QAgente::Acao getAcao(int percepcao);
protected:
    void moverParaDireita(void);
    void moverParaEsquerda(void);
    void moverParaCima(void);
    void moverParaBaixo(void);
    virtual void memorizar();
    virtual void reset();

    bool movimentoDireitaEsquerda(void);
    bool movimentoEsquerdaDireita(void);
    bool movimentoCimaBaixo(void);
    bool movimentoBaixoCima(void);
};

#endif // QAGENTEMEMORIAANTERIOR_H
