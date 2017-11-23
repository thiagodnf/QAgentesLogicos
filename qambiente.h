#ifndef QAMBIENTE_H
#define QAMBIENTE_H

#include <QThread>
#include <QPoint>

#include "qagente.h"

class QAmbiente: public QThread
{

public:
    bool teste;
    bool executar;
    bool pause;

    QAmbiente(QAgente* agente,int largura,int altura);

    int getAltura(void);
    int getLargura(void);
    int getPercepcao(int x, int y);
    QVector<QPoint> getSujeira();
    void setAgente(QAgente* agente);
    void reset();
    void run();
    void setStatus(int x,int y,int status);
protected:
    QAgente* agente;
    int** matrizAmbiente;

    virtual void update();
private:

    void init(void);
    bool estaSujo(int x,int y);

    bool temParedeEmCima(int i);
    bool temParedeEmBaixo(int i);
    bool temParedeNaDireita(int j);
    bool temParedeNaEsquerda(int j);

    QVector<QPoint> sujeira;

    int larguraAmbiente;
    int alturaAmbiente;

};

#endif // QAMBIENTE_H
