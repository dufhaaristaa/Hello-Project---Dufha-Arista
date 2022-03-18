#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>
using namespace std;

/**
Nama : Dufha Arista
NIM  : 1301204156
*/

#define idNode(P) (P)->idNode
#define nextNode(P) (P)->nextNode
#define firstEdge(P) (P)->firstEdge
#define nextEdge(P) (P)->nextEdge
#define First(P) (P).First
#define id(P) (P)->id
#define jarak(P) (P)->jarak
#define NIL NULL

typedef struct Node *adrNode;
typedef struct Edge *adrEdge;

struct Node {
    char idNode;
    adrNode nextNode;
    adrEdge firstEdge;
};

struct Edge {
    char id;
    int jarak;
    adrEdge nextEdge;
};

struct Graph {
   adrNode First;
};

void createNode(char X, adrNode &P);
void createGraph(Graph &G);
void ShowPeta(Graph G);
void ShowNode(Graph G);
void InsertNewNode(Graph &G, char InputidNode);
adrNode FindNode(Graph G, char id_Node);
void Connecting(Graph &G, char Node1, char Node2, int jarak);
int biayaPerbaikanJalan(Graph G);

#endif // GRAPH_H_INCLUDED
