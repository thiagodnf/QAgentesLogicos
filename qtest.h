#ifndef QTEST_H
#define QTEST_H

#include <QThread>

class QTest: public QThread
{
    int largura;
    int altura;
    int porcentagemDeSujeira;
    int repeticoes;
    QList<int> agentesSelecionados;
public:
    QTest(int altura,int largura,QList<int> agentesSelecionados,int porcentagemDeSujeira,int repeticoes);
    void run();
};

#endif // QTEST_H
