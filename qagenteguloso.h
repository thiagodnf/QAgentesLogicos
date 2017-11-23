#ifndef QAGENTEGULOSO_H
#define QAGENTEGULOSO_H

#include "qagentecommemoria.h"

class QAgenteGuloso: public QAgenteComMemoria
{

public:
    QAgenteGuloso();
    QAgente::Acao getAcao(int percepcao);
    bool end();
    void reset();
};

#endif // QAGENTEGULOSO_H
