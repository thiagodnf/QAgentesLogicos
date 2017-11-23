#ifndef QAGENTESIMPLES_H
#define QAGENTESIMPLES_H

#include "qagente.h"

class QAgenteSimples: public QAgente
{
public:
    QAgenteSimples();
    QAgente::Acao getAcao(int percepcao);
};

#endif // QAGENTESIMPLES_H
