#ifndef QAMBIENTEGUI_H
#define QAMBIENTEGUI_H

#include <QGraphicsScene>
#include <QLabel>
#include <QProgressBar>

#include "qambiente.h"
#include "mainwindow.h"

class QAmbienteGUI: public QGraphicsScene, public QAmbiente
{
public:
    QAmbienteGUI(QAgente* agente,int largura,int altura);
    void drawBackground(QPainter *painter, const QRectF &rect);
    void update();   
private:
    QImage imagemSujeira;
    QImage imagemAgente;
};

#endif // QAMBIENTEGUI_H
