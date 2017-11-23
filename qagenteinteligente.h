#ifndef QAGENTEINTELIGENTE_H
#define QAGENTEINTELIGENTE_H

#include <QPoint>

#include "qagente.h"


class QAgenteInteligente: public QAgente
{
public:
    QAgenteInteligente(QVector<QPoint> sujeira);
    QAgente::Acao getAcao(int percepcao);
    bool end();
private:  
    QPoint getSujeiraMaisProxima();

    QVector<QPoint> sujeira;
};

#endif // QAGENTEINTELIGENTE_H
