#include <QApplication>
#include "mainwindow.h"

#include "qdijkstra.h"

int main(int argc, char *argv[])
{
    /*int MAX = 3;

    int** graph = new int*[MAX];
    for(int i=0;i<MAX;i++)
        graph[i] = new int[MAX];

    graph[0][1] = 3;
    graph[1][0] = 3;

    graph[0][2] = 2;
    graph[2][0] = 2;

    graph[2][1] = 5;
    graph[1][2] = 5;


    QDijkstra dis(graph,3);

    dis.executar(0);
    dis.getCaminho();
    */
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
