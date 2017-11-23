#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QComboBox>

namespace Ui {
    class MainWindow;  
}

class QAgente;
class QAmbienteGUI;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void executar();
    void stop();
    void exibirAbout();
    void criarNovoAmbiente();
    void resetarAmbiente();
    void criarNovoAgenteSimples();
    void criarNovoAgenteMemoriaAnterior();
    void criarNovoAgenteMemoria();
    void criarNovoAgenteGuloso();
    void criarNovoAgenteInteligente();
    void atualizarInformacoes();
    void executarTestes();
private:    
    void init(void);
    void criarAgente(int tipo=1);
    void atualizarStatusBarAndDebug(QString texto);

    Ui::MainWindow *ui;
    QAmbienteGUI* ambiente;
    QAgente* agente;
};

#endif // MAINWINDOW_H
