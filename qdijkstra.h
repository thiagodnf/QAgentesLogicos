#ifndef QDIJKSTRA_H
#define QDIJKSTRA_H

class QDijkstra
{
public:
    QDijkstra(int** matrizDeDistancias,int numeroDeVertices);
    void executar(int verticeInicial);
    int* getCaminho(void);
private:
    int **graph;
    int numeroDeVertices;

    int* distances;
    int* pi;
    bool* visit;

};

#endif // QDIJKSTRA_H
