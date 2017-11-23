#include "qdijkstra.h"
#include <queue>
#include <iostream>
#include <math.h>

using namespace std;


QDijkstra::QDijkstra(int** matrizDeDistancias,int numeroDevertices)
{
    this->graph = matrizDeDistancias;
    this->numeroDeVertices = numeroDevertices;
    this->pi = new int[numeroDeVertices];
    this->distances = new int[numeroDeVertices];
    this->visit = new bool[numeroDeVertices];
}

void QDijkstra::executar(int verticeInicial)
{
    priority_queue<pair<int,int> > queue;
    pair <int,int> nodotmp;
    int i, j;

    for (int i=0; i<this->numeroDeVertices; i++) {
        distances[i] = 99999999999;
        pi[i] = -1;
    }

    distances[verticeInicial] = 0;
    queue.push(pair <int,int> (distances[verticeInicial], verticeInicial));

    while(!queue.empty()) {
        nodotmp = queue.top();
        queue.pop();
        i = nodotmp.second;

        for (j = 0; j<this->numeroDeVertices; j++){
            if (graph[i][j] > 0 && distances[i] + graph[i][j] < distances[j]) {
                distances[j] = distances[i] + graph[i][j];
                pi[j] = i;
                queue.push(pair <int,int>(-distances[j], j));
            }
        }

    }

}

int* QDijkstra::getCaminho()
{

    for(int i=0;i<this->numeroDeVertices;i++){
        cout<<"distances[]:"<<distances[i]<<endl;
    }

    int end = 2;

    cout << end << " ";
      while (pi[end] != -1) {
        cout << pi[end] << " ";
        end = pi[end];
      }
      cout << endl;


    return 0;
}
