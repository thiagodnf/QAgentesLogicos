#ifndef QAGENTECOMMEMORIA_H
#define QAGENTECOMMEMORIA_H

#include <QLinkedList>

#include "qagentememoriaanterior.h"

class QAgenteComMemoria: public QAgenteMemoriaAnterior
{
public:
    QAgenteComMemoria();
    virtual QAgente::Acao getAcao(int percepcao);
protected:
    bool memoriaVazia();
    void memorizar();
    virtual void reset();

    bool visitouCasaADireita(void);
    bool visitouCasaAEsquerda(void);
    bool visitouCasaEmCima(void);
    bool visitouCasaEmBaixo(void);
private:
    QLinkedList<QPointF> memoria;
};

#endif // QAGENTECOMMEMORIA_H
