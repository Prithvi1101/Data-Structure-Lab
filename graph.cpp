#include <iostream>
#include <vector>
#include <queue>
#define inf (1<<31)-1
#define M (10<<7)

using namespace std;

int main() {
    vector<int> G[M + 1];
    int level[M + 1];
    int color[M + 1];

    for (int i = 0; i <= M; i++) {
        color[i] = 0;
        level[i] = inf;
    }

    int ne;
    cout << "Enter number of edges:" << endl;
    cin >> ne;

    for (int i = 1; i <= ne; i++) {
        int u, v;
        cout << "Enter u and v:" << endl;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int src;
    cout << "Enter the source vertex for BFS:" << endl;
    cin >> src;

    queue<int> q;
    color[src] = 1;
    level[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        int l = G[u].size();

        for (int i = 0; i < l; i++) {
            int v = G[u][i];
            if (color[v] == 0) {
                color[v] = 1;
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }


    for (int i = 1; i <= M; i++) {
        if (level[i] != inf) {
            cout << "Vertex: " << i << " Level: " << level[i] << endl;
        }
    }

    return 0;
}
