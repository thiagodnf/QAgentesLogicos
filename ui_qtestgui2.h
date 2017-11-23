/********************************************************************************
** Form generated from reading UI file 'qtestgui2.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTESTGUI2_H
#define UI_QTESTGUI2_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QDialog>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTestGui2
{
public:
    QGroupBox *groupBoxInformacoesGerais;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutEscolhaOsAgentes;
    QCheckBox *checkBoxAgenteSimples;
    QCheckBox *checkBoxAgenteMemoriaAnterior;
    QCheckBox *checkBoxAgenteGuloso;
    QCheckBox *checkBoxAgenteInteligente;
    QGroupBox *groupBoxEscolhaOsAgentes;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayoutInformaoesGerais;
    QLabel *labelPorcentagemDeSujeira;
    QLabel *labelRepeticoes;
    QSpinBox *spinBoxRepeticoes;
    QSpinBox *spinBoxPorcentagemDeSujeira;
    QGroupBox *groupBoxAmbiente;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutAmbiente;
    QLabel *labelLargura;
    QSpinBox *spinBoxLargura;
    QLabel *labelAltura;
    QSpinBox *spinBoxAltura;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutBotoes;
    QPushButton *pushButtonExecutar;
    QPushButton *pushButtonCancelar;

    void setupUi(QDialog *QTestGui2)
    {
        if (QTestGui2->objectName().isEmpty())
            QTestGui2->setObjectName(QString::fromUtf8("QTestGui2"));
        QTestGui2->resize(436, 439);
        groupBoxInformacoesGerais = new QGroupBox(QTestGui2);
        groupBoxInformacoesGerais->setObjectName(QString::fromUtf8("groupBoxInformacoesGerais"));
        groupBoxInformacoesGerais->setGeometry(QRect(10, 220, 371, 161));
        verticalLayoutWidget = new QWidget(groupBoxInformacoesGerais);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 30, 227, 124));
        verticalLayoutEscolhaOsAgentes = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutEscolhaOsAgentes->setObjectName(QString::fromUtf8("verticalLayoutEscolhaOsAgentes"));
        verticalLayoutEscolhaOsAgentes->setContentsMargins(0, 0, 0, 0);
        checkBoxAgenteSimples = new QCheckBox(verticalLayoutWidget);
        checkBoxAgenteSimples->setObjectName(QString::fromUtf8("checkBoxAgenteSimples"));
        checkBoxAgenteSimples->setChecked(true);

        verticalLayoutEscolhaOsAgentes->addWidget(checkBoxAgenteSimples);

        checkBoxAgenteMemoriaAnterior = new QCheckBox(verticalLayoutWidget);
        checkBoxAgenteMemoriaAnterior->setObjectName(QString::fromUtf8("checkBoxAgenteMemoriaAnterior"));

        verticalLayoutEscolhaOsAgentes->addWidget(checkBoxAgenteMemoriaAnterior);

        checkBoxAgenteGuloso = new QCheckBox(verticalLayoutWidget);
        checkBoxAgenteGuloso->setObjectName(QString::fromUtf8("checkBoxAgenteGuloso"));

        verticalLayoutEscolhaOsAgentes->addWidget(checkBoxAgenteGuloso);

        checkBoxAgenteInteligente = new QCheckBox(verticalLayoutWidget);
        checkBoxAgenteInteligente->setObjectName(QString::fromUtf8("checkBoxAgenteInteligente"));

        verticalLayoutEscolhaOsAgentes->addWidget(checkBoxAgenteInteligente);

        groupBoxEscolhaOsAgentes = new QGroupBox(QTestGui2);
        groupBoxEscolhaOsAgentes->setObjectName(QString::fromUtf8("groupBoxEscolhaOsAgentes"));
        groupBoxEscolhaOsAgentes->setGeometry(QRect(10, 120, 391, 111));
        gridLayoutWidget_2 = new QWidget(groupBoxEscolhaOsAgentes);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 20, 351, 70));
        gridLayoutInformaoesGerais = new QGridLayout(gridLayoutWidget_2);
        gridLayoutInformaoesGerais->setObjectName(QString::fromUtf8("gridLayoutInformaoesGerais"));
        gridLayoutInformaoesGerais->setContentsMargins(0, 0, 0, 0);
        labelPorcentagemDeSujeira = new QLabel(gridLayoutWidget_2);
        labelPorcentagemDeSujeira->setObjectName(QString::fromUtf8("labelPorcentagemDeSujeira"));

        gridLayoutInformaoesGerais->addWidget(labelPorcentagemDeSujeira, 0, 0, 1, 1);

        labelRepeticoes = new QLabel(gridLayoutWidget_2);
        labelRepeticoes->setObjectName(QString::fromUtf8("labelRepeticoes"));

        gridLayoutInformaoesGerais->addWidget(labelRepeticoes, 1, 0, 1, 1);

        spinBoxRepeticoes = new QSpinBox(gridLayoutWidget_2);
        spinBoxRepeticoes->setObjectName(QString::fromUtf8("spinBoxRepeticoes"));
        spinBoxRepeticoes->setMinimum(2);

        gridLayoutInformaoesGerais->addWidget(spinBoxRepeticoes, 1, 1, 1, 1);

        spinBoxPorcentagemDeSujeira = new QSpinBox(gridLayoutWidget_2);
        spinBoxPorcentagemDeSujeira->setObjectName(QString::fromUtf8("spinBoxPorcentagemDeSujeira"));
        spinBoxPorcentagemDeSujeira->setMinimum(10);
        spinBoxPorcentagemDeSujeira->setMaximum(50);

        gridLayoutInformaoesGerais->addWidget(spinBoxPorcentagemDeSujeira, 0, 1, 1, 1);

        groupBoxAmbiente = new QGroupBox(QTestGui2);
        groupBoxAmbiente->setObjectName(QString::fromUtf8("groupBoxAmbiente"));
        groupBoxAmbiente->setGeometry(QRect(10, 10, 391, 101));
        gridLayoutWidget = new QWidget(groupBoxAmbiente);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(25, 20, 361, 80));
        gridLayoutAmbiente = new QGridLayout(gridLayoutWidget);
        gridLayoutAmbiente->setObjectName(QString::fromUtf8("gridLayoutAmbiente"));
        gridLayoutAmbiente->setContentsMargins(0, 0, 0, 0);
        labelLargura = new QLabel(gridLayoutWidget);
        labelLargura->setObjectName(QString::fromUtf8("labelLargura"));

        gridLayoutAmbiente->addWidget(labelLargura, 0, 0, 1, 1);

        spinBoxLargura = new QSpinBox(gridLayoutWidget);
        spinBoxLargura->setObjectName(QString::fromUtf8("spinBoxLargura"));
        spinBoxLargura->setMinimum(10);
        spinBoxLargura->setMaximum(300);

        gridLayoutAmbiente->addWidget(spinBoxLargura, 0, 1, 1, 1);

        labelAltura = new QLabel(gridLayoutWidget);
        labelAltura->setObjectName(QString::fromUtf8("labelAltura"));

        gridLayoutAmbiente->addWidget(labelAltura, 1, 0, 1, 1);

        spinBoxAltura = new QSpinBox(gridLayoutWidget);
        spinBoxAltura->setObjectName(QString::fromUtf8("spinBoxAltura"));
        spinBoxAltura->setMinimum(10);
        spinBoxAltura->setMaximum(300);

        gridLayoutAmbiente->addWidget(spinBoxAltura, 1, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(QTestGui2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 390, 188, 33));
        horizontalLayoutBotoes = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutBotoes->setObjectName(QString::fromUtf8("horizontalLayoutBotoes"));
        horizontalLayoutBotoes->setContentsMargins(0, 0, 0, 0);
        pushButtonExecutar = new QPushButton(horizontalLayoutWidget);
        pushButtonExecutar->setObjectName(QString::fromUtf8("pushButtonExecutar"));

        horizontalLayoutBotoes->addWidget(pushButtonExecutar);

        pushButtonCancelar = new QPushButton(horizontalLayoutWidget);
        pushButtonCancelar->setObjectName(QString::fromUtf8("pushButtonCancelar"));
        pushButtonCancelar->setCheckable(false);

        horizontalLayoutBotoes->addWidget(pushButtonCancelar);


        retranslateUi(QTestGui2);
        QObject::connect(pushButtonCancelar, SIGNAL(clicked()), QTestGui2, SLOT(close()));

        QMetaObject::connectSlotsByName(QTestGui2);
    } // setupUi

    void retranslateUi(QDialog *QTestGui2)
    {
        QTestGui2->setWindowTitle(QApplication::translate("QTestGui2", "QAgentes Test GUI", 0));
        groupBoxInformacoesGerais->setTitle(QApplication::translate("QTestGui2", "Escolha os Agentes:", 0));
        checkBoxAgenteSimples->setText(QApplication::translate("QTestGui2", "Agentes Simples", 0));
        checkBoxAgenteMemoriaAnterior->setText(QApplication::translate("QTestGui2", "Agente com Mem\303\263ria Anterior", 0));
        checkBoxAgenteGuloso->setText(QApplication::translate("QTestGui2", "Agente Guloso", 0));
        checkBoxAgenteInteligente->setText(QApplication::translate("QTestGui2", "Agente Inteligente", 0));
        groupBoxEscolhaOsAgentes->setTitle(QApplication::translate("QTestGui2", "Informa\303\247\303\265es Gerais:", 0));
        labelPorcentagemDeSujeira->setText(QApplication::translate("QTestGui2", "Porcentagem de Sujeira:(em %)", 0));
        labelRepeticoes->setText(QApplication::translate("QTestGui2", "Repeti\303\247\303\265es:", 0));
        groupBoxAmbiente->setTitle(QApplication::translate("QTestGui2", "Ambiente:", 0));
        labelLargura->setText(QApplication::translate("QTestGui2", "Largura:", 0));
        labelAltura->setText(QApplication::translate("QTestGui2", "Altura:", 0));
        pushButtonExecutar->setText(QApplication::translate("QTestGui2", "Executar", 0));
        pushButtonCancelar->setText(QApplication::translate("QTestGui2", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class QTestGui2: public Ui_QTestGui2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTESTGUI2_H
