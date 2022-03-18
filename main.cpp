#include "graph.h"
/**
Nama : Dufha Arista
NIM  : 1301204156
*/
int main()
{
    Graph G;

    createGraph(G);

    cout << "MEMBUAT NODE PADA GRAF" << endl;

    InsertNewNode(G, 'A');
    InsertNewNode(G, 'B');
    InsertNewNode(G, 'C');
    InsertNewNode(G, 'D');

    ShowNode(G);

    cout << "MEMBUAT EDGE PADA GRAF" << endl;
    Connecting(G, 'A', 'C', 5);
    Connecting(G, 'A', 'D', 10);
    Connecting(G, 'B', 'D', 7);
    Connecting(G, 'D', 'C', 2);

    ShowPeta(G);

    cout<<"biaya perbaikan jalan dari total seluruh jalur yang ada : Rp."<<biayaPerbaikanJalan(G);

    return 0;
}
