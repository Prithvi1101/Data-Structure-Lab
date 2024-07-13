//Implementation of Adjacency Matrix for Directed & Unweighted

#include <iostream>
#define M (10<<7)
using namespace std;


int G[M + 1][M + 1];

int main() {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5; j++) {
            G[i][j] = 0;
        }
    }
    int ne;
    cout << "Enter the number of edges: ";
    cin >> ne;
    cout << "Enter the edges (u v):" << endl;
    for (int i = 1; i <= ne; i++) {
        int u, v;
        cin >> u >> v;
        G[u][v] = 1;
        G[v][u] = 1;
    }
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

