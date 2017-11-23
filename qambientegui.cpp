#include <QPainter>
#include <QDebug>
#include <QProgressBar>

#include "qambientegui.h"
#include "mainwindow.h"

QAmbienteGUI::QAmbienteGUI(QAgente* agente,int largura,int altura)
    :QAmbiente(agente,largura,altura)
{
    this->imagemSujeira = QImage(":/resources/sujeira.png");
    this->imagemAgente = QImage(":/resources/aspirador.png");

    setSceneRect(0,0,300,300);
}

void QAmbienteGUI::drawBackground(QPainter *painter, const QRectF &)
{
    for(int y=0;y<getAltura();y++){
        for(int x=0;x<getLargura();x++){
            painter->setBrush(QBrush(QColor("#d0dafd")));
            painter->drawRect(QRectF(x*(30),y*(30),30,30));

            if(matrizAmbiente[y][x] == 1){
                painter->setBrush(QBrush(QColor("#f0f86b")));
                painter->drawRect(QRectF(x*(30),y*(30),30,30));
            }

            if(matrizAmbiente[y][x] == 2){
                QRectF target(x*(30)+5,y*(30)+5,20,20);
                painter->drawImage(target,this->imagemSujeira);
            }

        }

    }

    painter->drawImage(QRectF(agente->getPosX()*30,agente->getPosY()*30,30,30),this->imagemAgente);

}


void QAmbienteGUI::update()
{
    QGraphicsScene::update();
    QAmbiente::update();
}
