/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QGraphicsView>
#include <QGroupBox>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QProgressBar>
#include <QStatusBar>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSobre;
    QAction *actionSair;
    QAction *actionSobre_Qt;
    QAction *actionNovoAmbiente;
    QAction *actionNovoAgenteSimples;
    QAction *actionExecutar;
    QAction *actionParar;
    QAction *actionResetar;
    QAction *actionNovoAgenteMemoriaAnterior;
    QAction *actionNovoAgenteMemoria;
    QAction *actionNovoAgenteGuloso;
    QAction *actionNovoAgenteInteligente;
    QAction *actionExecutarTestes;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelAgentePosX;
    QLabel *labelAgentePosY;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelInfoPassos;
    QLabel *labelInfoSujeira;
    QLabel *labelInfoPontos;
    QGroupBox *groupBox_3;
    QProgressBar *pbBateriaAgente;
    QMenuBar *menuBar;
    QMenu *menuAjuda;
    QMenu *menuArquivo;
    QMenu *menuNovo;
    QMenu *menuTestes;
    QMenu *menuExecutar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(518, 396);
        QIcon icon;
        icon.addFile(QString::fromUtf8("resources/aspirador.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSobre_Qt = new QAction(MainWindow);
        actionSobre_Qt->setObjectName(QString::fromUtf8("actionSobre_Qt"));
        actionNovoAmbiente = new QAction(MainWindow);
        actionNovoAmbiente->setObjectName(QString::fromUtf8("actionNovoAmbiente"));
        actionNovoAgenteSimples = new QAction(MainWindow);
        actionNovoAgenteSimples->setObjectName(QString::fromUtf8("actionNovoAgenteSimples"));
        actionExecutar = new QAction(MainWindow);
        actionExecutar->setObjectName(QString::fromUtf8("actionExecutar"));
        actionExecutar->setIconVisibleInMenu(false);
        actionParar = new QAction(MainWindow);
        actionParar->setObjectName(QString::fromUtf8("actionParar"));
        actionResetar = new QAction(MainWindow);
        actionResetar->setObjectName(QString::fromUtf8("actionResetar"));
        actionNovoAgenteMemoriaAnterior = new QAction(MainWindow);
        actionNovoAgenteMemoriaAnterior->setObjectName(QString::fromUtf8("actionNovoAgenteMemoriaAnterior"));
        actionNovoAgenteMemoria = new QAction(MainWindow);
        actionNovoAgenteMemoria->setObjectName(QString::fromUtf8("actionNovoAgenteMemoria"));
        actionNovoAgenteGuloso = new QAction(MainWindow);
        actionNovoAgenteGuloso->setObjectName(QString::fromUtf8("actionNovoAgenteGuloso"));
        actionNovoAgenteInteligente = new QAction(MainWindow);
        actionNovoAgenteInteligente->setObjectName(QString::fromUtf8("actionNovoAgenteInteligente"));
        actionExecutarTestes = new QAction(MainWindow);
        actionExecutarTestes->setObjectName(QString::fromUtf8("actionExecutarTestes"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 320, 320));
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(340, 10, 161, 101));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 141, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelAgentePosX = new QLabel(verticalLayoutWidget);
        labelAgentePosX->setObjectName(QString::fromUtf8("labelAgentePosX"));

        verticalLayout->addWidget(labelAgentePosX);

        labelAgentePosY = new QLabel(verticalLayoutWidget);
        labelAgentePosY->setObjectName(QString::fromUtf8("labelAgentePosY"));

        verticalLayout->addWidget(labelAgentePosY);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(339, 109, 161, 121));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 30, 141, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelInfoPassos = new QLabel(verticalLayoutWidget_2);
        labelInfoPassos->setObjectName(QString::fromUtf8("labelInfoPassos"));

        verticalLayout_2->addWidget(labelInfoPassos);

        labelInfoSujeira = new QLabel(verticalLayoutWidget_2);
        labelInfoSujeira->setObjectName(QString::fromUtf8("labelInfoSujeira"));

        verticalLayout_2->addWidget(labelInfoSujeira);

        labelInfoPontos = new QLabel(verticalLayoutWidget_2);
        labelInfoPontos->setObjectName(QString::fromUtf8("labelInfoPontos"));

        verticalLayout_2->addWidget(labelInfoPontos);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(340, 230, 161, 91));
        pbBateriaAgente = new QProgressBar(groupBox_3);
        pbBateriaAgente->setObjectName(QString::fromUtf8("pbBateriaAgente"));
        pbBateriaAgente->setGeometry(QRect(20, 40, 118, 23));
        pbBateriaAgente->setValue(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 29));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuNovo = new QMenu(menuArquivo);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        menuTestes = new QMenu(menuBar);
        menuTestes->setObjectName(QString::fromUtf8("menuTestes"));
        menuExecutar = new QMenu(menuBar);
        menuExecutar->setObjectName(QString::fromUtf8("menuExecutar"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuExecutar->menuAction());
        menuBar->addAction(menuTestes->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuAjuda->addAction(actionSobre);
        menuAjuda->addAction(actionSobre_Qt);
        menuArquivo->addAction(menuNovo->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuNovo->addAction(actionNovoAmbiente);
        menuNovo->addSeparator();
        menuNovo->addAction(actionNovoAgenteSimples);
        menuNovo->addAction(actionNovoAgenteMemoriaAnterior);
        menuNovo->addAction(actionNovoAgenteMemoria);
        menuNovo->addAction(actionNovoAgenteGuloso);
        menuNovo->addAction(actionNovoAgenteInteligente);
        menuTestes->addAction(actionExecutarTestes);
        menuExecutar->addAction(actionExecutar);
        menuExecutar->addAction(actionParar);
        menuExecutar->addSeparator();
        menuExecutar->addAction(actionResetar);

        retranslateUi(MainWindow);
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QAgentes L\303\263gicos", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", 0));
        actionSobre_Qt->setText(QApplication::translate("MainWindow", "Sobre Qt", 0));
        actionNovoAmbiente->setText(QApplication::translate("MainWindow", "Ambiente", 0));
        actionNovoAgenteSimples->setText(QApplication::translate("MainWindow", "Agente Simples", 0));
        actionExecutar->setText(QApplication::translate("MainWindow", "Executar", 0));
#ifndef QT_NO_STATUSTIP
        actionExecutar->setStatusTip(QApplication::translate("MainWindow", "Disparar agente!", 0));
#endif // QT_NO_STATUSTIP
        actionExecutar->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        actionParar->setText(QApplication::translate("MainWindow", "Parar", 0));
        actionResetar->setText(QApplication::translate("MainWindow", "Resetar", 0));
        actionNovoAgenteMemoriaAnterior->setText(QApplication::translate("MainWindow", "Agente Com Mem\303\263ria Anterior", 0));
        actionNovoAgenteMemoria->setText(QApplication::translate("MainWindow", "Agente com Mem\303\263ria Completa", 0));
        actionNovoAgenteGuloso->setText(QApplication::translate("MainWindow", "Agente Guloso", 0));
        actionNovoAgenteInteligente->setText(QApplication::translate("MainWindow", "Agente Inteligente", 0));
        actionExecutarTestes->setText(QApplication::translate("MainWindow", "Executar", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Agente", 0));
        labelAgentePosX->setText(QApplication::translate("MainWindow", "PosX: ", 0));
        labelAgentePosY->setText(QApplication::translate("MainWindow", "PosY:", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Informa\303\247\303\265es", 0));
#ifndef QT_NO_TOOLTIP
        labelInfoPassos->setToolTip(QApplication::translate("MainWindow", "Total de passos dados pelo agente", 0));
#endif // QT_NO_TOOLTIP
        labelInfoPassos->setText(QApplication::translate("MainWindow", "Passos:", 0));
#ifndef QT_NO_TOOLTIP
        labelInfoSujeira->setToolTip(QApplication::translate("MainWindow", "N\303\272mero de salas limpa", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        labelInfoSujeira->setWhatsThis(QApplication::translate("MainWindow", "oi", 0));
#endif // QT_NO_WHATSTHIS
        labelInfoSujeira->setText(QApplication::translate("MainWindow", "Sujeira:", 0));
#ifndef QT_NO_TOOLTIP
        labelInfoPontos->setToolTip(QApplication::translate("MainWindow", "Pontua\303\247\303\243o Geral do agente", 0));
#endif // QT_NO_TOOLTIP
        labelInfoPontos->setText(QApplication::translate("MainWindow", "Pontos:", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Bateria", 0));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuNovo->setTitle(QApplication::translate("MainWindow", "Novo", 0));
        menuTestes->setTitle(QApplication::translate("MainWindow", "Testes", 0));
        menuExecutar->setTitle(QApplication::translate("MainWindow", "A\303\247\303\243o", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
