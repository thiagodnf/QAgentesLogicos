/********************************************************************************
** Form generated from reading UI file 'qtestgui.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTESTGUI_H
#define UI_QTESTGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBoxAmbiente;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutAmbiente;
    QLabel *labelLargura;
    QSpinBox *spinBoxLargura;
    QLabel *labelAltura;
    QSpinBox *spinBoxAltura;
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutBotoes;
    QPushButton *pushButtonExecutar;
    QPushButton *pushButtonCancelar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(437, 437);
        groupBoxAmbiente = new QGroupBox(Dialog);
        groupBoxAmbiente->setObjectName(QString::fromUtf8("groupBoxAmbiente"));
        groupBoxAmbiente->setGeometry(QRect(20, 10, 391, 101));
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

        groupBoxInformacoesGerais = new QGroupBox(Dialog);
        groupBoxInformacoesGerais->setObjectName(QString::fromUtf8("groupBoxInformacoesGerais"));
        groupBoxInformacoesGerais->setGeometry(QRect(20, 220, 371, 161));
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

        verticalLayoutWidget->raise();
        groupBoxEscolhaOsAgentes = new QGroupBox(Dialog);
        groupBoxEscolhaOsAgentes->setObjectName(QString::fromUtf8("groupBoxEscolhaOsAgentes"));
        groupBoxEscolhaOsAgentes->setGeometry(QRect(20, 120, 391, 111));
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

        gridLayoutWidget_2->raise();
        groupBoxInformacoesGerais->raise();
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 390, 188, 33));
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


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "QAgentesL\303\263gicos Test", 0, QApplication::UnicodeUTF8));
        groupBoxAmbiente->setTitle(QApplication::translate("Dialog", "Ambiente:", 0, QApplication::UnicodeUTF8));
        labelLargura->setText(QApplication::translate("Dialog", "Largura:", 0, QApplication::UnicodeUTF8));
        labelAltura->setText(QApplication::translate("Dialog", "Altura:", 0, QApplication::UnicodeUTF8));
        groupBoxInformacoesGerais->setTitle(QApplication::translate("Dialog", "Escolha os Agentes:", 0, QApplication::UnicodeUTF8));
        checkBoxAgenteSimples->setText(QApplication::translate("Dialog", "Agentes Simples", 0, QApplication::UnicodeUTF8));
        checkBoxAgenteMemoriaAnterior->setText(QApplication::translate("Dialog", "Agente com Mem\303\263ria Anterior", 0, QApplication::UnicodeUTF8));
        checkBoxAgenteGuloso->setText(QApplication::translate("Dialog", "Agente Guloso", 0, QApplication::UnicodeUTF8));
        checkBoxAgenteInteligente->setText(QApplication::translate("Dialog", "Agente Inteligente", 0, QApplication::UnicodeUTF8));
        groupBoxEscolhaOsAgentes->setTitle(QApplication::translate("Dialog", "Informa\303\247\303\265es Gerais:", 0, QApplication::UnicodeUTF8));
        labelPorcentagemDeSujeira->setText(QApplication::translate("Dialog", "Porcentagem de Sujeira:(em %)", 0, QApplication::UnicodeUTF8));
        labelRepeticoes->setText(QApplication::translate("Dialog", "Repeti\303\247\303\265es:", 0, QApplication::UnicodeUTF8));
        pushButtonExecutar->setText(QApplication::translate("Dialog", "Executar", 0, QApplication::UnicodeUTF8));
        pushButtonCancelar->setText(QApplication::translate("Dialog", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTESTGUI_H
