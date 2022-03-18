#include "graph.h"

/**
Nama : Dufha Arista
NIM  : 1301204156
*/

void createNode(char X, adrNode &P) {
    P = new Node;
    idNode(P) = X;
    nextNode(P) = NIL;
    firstEdge(P) = NIL;
}

void createGraph(Graph &G) {
    First(G) = NIL;
}

void ShowPeta(Graph G){
    adrNode N = First(G);
    if(N != NIL){
        while(N != NIL){
            adrEdge E = firstEdge(N);
            while(E != NIL){
                cout<<idNode(N)<<" ke "<<id(E) << " : "<< jarak(E)<<endl;
                E = nextEdge(E);
            }
            N = nextNode(N);
        }
    } else {
        cout<<"GRAF KOSONG"<<endl;
    }
}


void InsertNewNode(Graph &G, char InputidNode){
    adrNode P;
    createNode(InputidNode, P);

    adrNode Q = First(G);

    if(Q != NIL) {
        while(nextNode(Q) != NIL) {
            Q = nextNode(Q);
        }
        nextNode(Q) = P;
    } else {
        First(G) = P;
    }
    nextNode(P) = NIL;
    firstEdge(P) = NIL;
}

adrNode FindNode(Graph G, char id_Node) {
    adrNode N = First(G);
    if (N != NIL) {
        while(N != NIL && idNode(N) != id_Node) {
            N = nextNode(N);
        }
    }

    return N;
}

void Connecting(Graph &G, char Node1, char Node2, int jarak) {
    adrEdge edge = new Edge;

    adrNode n1 = FindNode(G, Node1);
    adrNode n2 = FindNode(G, Node2);

    if(n1 != NIL && n2 != NIL) {
        nextEdge(edge) = NIL;
        jarak(edge) = jarak;
        id(edge) = Node2;

        adrEdge P = firstEdge(n1);
        if(P == NIL){
           firstEdge(n1) = edge;
        } else {
            while(nextEdge(P) != NIL){
                P = nextEdge(P);
            }
            nextEdge(P) = edge;
        }
    } else{
        cout << "Node1 atau Node2 tidak tersedia" << endl;
    }
}

int biayaPerbaikanJalan(Graph G){
    int total = 0;
    adrNode N = First(G);
    while(N != NIL){
        adrEdge E= firstEdge(N);
        while(E != NIL){
            total = total + jarak(E);
            E = nextEdge(E);
        }
        N = nextNode(N);
    }

    return total * 1000000;
}

//function buatan sendiri
void ShowNode(Graph G){
    adrNode N = First(G);
    if(N != NIL){
        while(N != NIL){
            adrEdge E= firstEdge(N);
            cout<<idNode(N)<<" ";
            N = nextNode(N);
        }
        cout<<endl;
    } else {
        cout<<"GRAF KOSONG"<<endl;
    }
}
