#include <stdio.h>
#define MAX 100

typedef struct Graph {
    int vertices;
    int adjMatrix[MAX][MAX];
} Graph;

void initializeGraph(Graph* graph, int vertices) {
    graph->vertices = vertices;
    int i,j;
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            graph->adjMatrix[i][j] = 0;  
        }
    }
}

void addEdge(Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;  
}

void removeEdge(Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 0;
    graph->adjMatrix[dest][src] = 0;  
}

void displayGraph(Graph* graph) {
    printf("Adjacency Matrix:\n");
    int i,j;
    for (i = 0; i < graph->vertices; i++) {
        for (j = 0; j < graph->vertices; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices = 4;
    Graph graph;

    initializeGraph(&graph, vertices);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 2);
    addEdge(&graph, 1, 2);
    addEdge(&graph, 2, 3);

    displayGraph(&graph);


    return 0;
}

