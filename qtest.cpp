#include <QDebug>
#include <QFile>

#include "qtest.h"
#include "qambiente.h"
#include "qagentesimples.h"
#include "qagentememoriaanterior.h"
#include "qagentecommemoria.h"
#include "qagenteguloso.h"
#include "qagenteinteligente.h"


QTest::QTest(int altura,int largura,QList<int> agentesSelecionados,int porcentagemDeSujeira,int repeticoes)
{
    this->largura = largura;
    this->altura = altura;
    this->agentesSelecionados = agentesSelecionados;
    this->porcentagemDeSujeira = porcentagemDeSujeira;
    this->repeticoes = repeticoes;
}

void QTest::run(){
    int largura_aux = largura;
    int altura_aux = altura;

    QList<QAmbiente*>* ambientes = new QList<QAmbiente*>();

     while(largura_aux < 200){
         QAmbiente* ambiente = new QAmbiente(0,largura_aux,altura_aux);
         ambiente->teste = true;

         ambientes->push_back(ambiente);

         largura_aux += 2;
         altura_aux += 2;
     }



    while(!agentesSelecionados.isEmpty()){
        int idAgente = agentesSelecionados.takeFirst();
        QString fileName;

        QAgente* agenteAtual = 0;
        switch(idAgente){
            case 1:
                agenteAtual = new QAgenteSimples();
                fileName = "agente_simples";
                break;
            case 2:
                agenteAtual = new QAgenteMemoriaAnterior();
                fileName = "agente_memoria_anterior";
                break;
            case 3:
                agenteAtual = new QAgenteGuloso();
                fileName = "agente_guloso";
                break;
            case 4:

                fileName = "agente_inteligente";
                break;
            default:
                qDebug()<<"erro! Nenhum agente encontrado!"<<endl;
        }

        QFile file("tests/"+fileName+".txt");

        if( !file.open( QIODevice::WriteOnly ) )
            return;

        QTextStream stream( &file );
        stream<<"agente"<<","<<"area"<<","<<"passos"<<","<<"sujeira"<<","<<"pontuacao"<<","<<"bateria"<<endl;


        for(int i=0;i<ambientes->size();i++){
            QAmbiente* ambiente = ambientes->at(i);

            if(idAgente == 4){
                agenteAtual = new QAgenteInteligente(ambiente->getSujeira());
            }

            int areaTotal = ambiente->getLargura()*ambiente->getAltura();
            agenteAtual->MAX_PASSOS = 2*areaTotal;
            ambiente->setAgente(agenteAtual);

            ambiente->reset();
            ambiente->run();

            stream<<idAgente<<","
                 <<areaTotal<<","
                 <<agenteAtual->getContadorDePassos()<<","
                 <<agenteAtual->getContadorDeSujeiraLimpa()<<","
                 <<agenteAtual->getContadorDePontuacao()<<","
                 <<agenteAtual->getBateria()
                 <<endl;
        }

        file.close();
    }


    /*QAgente* agenteSimples = new QAgenteSimples();
    agenteSimples->MAX_PASSOS = 2*largura*altura;

    QAgente* agenteMemoriaAnterior = new QAgenteMemoriaAnterior();
    agenteMemoriaAnterior->MAX_PASSOS = 2*largura*altura;


    QAgente* agenteComMemoria = new QAgenteComMemoria();
    agenteComMemoria->MAX_PASSOS = 2*largura*altura;

    QAgente* agenteGuloso = new QAgenteGuloso();
    agenteGuloso->MAX_PASSOS = 2*largura*altura;

    QAmbiente* ambiente = new QAmbiente(agenteSimples,largura,altura);
    ambiente->teste = true;

    ambiente->run();

    while(ambiente->isRunning()){
        qDebug()<<"Executando"<<endl;
    }

    ambiente->setAgente(agenteMemoriaAnterior);
    ambiente->reset();

    ambiente->run();

    while(ambiente->isRunning()){
        qDebug()<<"Executando"<<endl;
    }

    ambiente->setAgente(agenteComMemoria);
    ambiente->reset();

    ambiente->run();

    while(ambiente->isRunning()){
        qDebug()<<"Executando"<<endl;
    }

    ambiente->setAgente(agenteGuloso);
    ambiente->reset();

    ambiente->run();

    while(ambiente->isRunning()){
        qDebug()<<"Executando"<<endl;
    }

    QAgente* agenteInteligente = new QAgenteInteligente(ambiente->getSujeira());
    agenteInteligente->MAX_PASSOS = 2*largura*altura;

    ambiente->setAgente(agenteInteligente);
    ambiente->reset();

    ambiente->run();

    while(ambiente->isRunning()){
        qDebug()<<"Executando"<<endl;
    }


    qDebug()<<"Agente              |   Passos  |   Sujeira Limpa   |   Pontuacao   |   Bateria %";
    qDebug()<<"========================================================";
    qDebug()<<"Agente Simples      |   "<<agenteSimples->getContadorDePassos()<<"  |   "<<agenteSimples->getContadorDeSujeiraLimpa()<<"        |   "<<agenteSimples->getContadorDePontuacao()<<"   |   "<<agenteSimples->getBateria();
    qDebug()<<"Agente Memoria A.   |   "<<agenteMemoriaAnterior->getContadorDePassos()<<"  |   "<<agenteMemoriaAnterior->getContadorDeSujeiraLimpa()<<"        |   "<<agenteMemoriaAnterior->getContadorDePontuacao()<<"   |   "<<agenteMemoriaAnterior->getBateria();
    qDebug()<<"Agente c/ Memoria   |   "<<agenteComMemoria->getContadorDePassos()<<"  |   "<<agenteComMemoria->getContadorDeSujeiraLimpa()<<"        |   "<<agenteComMemoria->getContadorDePontuacao()<<"   |   "<<agenteComMemoria->getBateria();
    qDebug()<<"Agente Guloso       |   "<<agenteGuloso->getContadorDePassos()<<"  |   "<<agenteGuloso->getContadorDeSujeiraLimpa()<<"        |   "<<agenteGuloso->getContadorDePontuacao()<<"   |   "<<agenteGuloso->getBateria();
    qDebug()<<"Agente Inteligente  |   "<<agenteInteligente->getContadorDePassos()<<"  |   "<<agenteInteligente->getContadorDeSujeiraLimpa()<<"        |   "<<agenteInteligente->getContadorDePontuacao()<<"   |   "<<agenteInteligente->getBateria();
*/
    qDebug()<<"Terminou o Teste!"<<endl;

}
