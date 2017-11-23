#ifndef QAGENTE_H
#define QAGENTE_H

#include <QVector>
#include <QObject>

class QAmbiente;

class QAgente: public QObject
{
     Q_OBJECT
signals:

    void atualizarInformacoes();


public:
    enum Acao {
        Limpar,MoverParaCima,MoverParaBaixo,
        MoverParaDireita,MoverParaEsquerda,FazerNada
    };
    int MAX_PASSOS;

    QAgente();
    int getPosX();
    int getPosY();
    int getContadorDePassos();
    int getContadorDeSujeiraLimpa();
    int getContadorDePontuacao();
    int getBateria();
    void efetuadores(QAmbiente* ambiente,Acao acao);
    virtual void reset();
    virtual Acao getAcao(int percepcao);
    virtual bool end();
protected:
    QAgente::Acao escolherAcaoRandomicamente(QVector<Acao> listaDeOpcoes);
    virtual void moverParaDireita(void);
    virtual void moverParaEsquerda(void);
    virtual void moverParaCima(void);
    virtual void moverParaBaixo(void);

private:
    void limpar(QAmbiente *ambiente);

    int posX;
    int posY;
    int contadorDePassos;
    int contadorDePontos;
    int contadorDeSujeiraLimpa;
};

#endif // QAGENTE_H
