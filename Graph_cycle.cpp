#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int M = 10000;

int main() {
    vector<int> G[M + 1];
    int ne;
    cout << "Enter the number of edges: " << endl;
    cin >> ne;

    for (int i = 1; i <= ne; i++) {
        cout << "Enter u vertex, v vertex: " << endl;
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int color[M + 1] = {0};  // 0 indicates not visited, 1 indicates visited
    int level[M + 1] = {0};  // Tracks the level of each vertex in BFS

    cout << "Enter the source vertex: " << endl;
    int source;
    cin >> source;
    color[source] = 1;
    level[source] = 0;

    queue<int> Q;
    Q.push(source);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        for (int v : G[u]) {
            if (color[v] == 0) {
                color[v] = 1;
                level[v] = level[u] + 1;
                Q.push(v);
            } else if (level[u] == level[v] || level[u] + 1 == level[v]) {
                // A cycle is detected if we find a visited node in the same level or the adjacent level
                cout << "Graph contains cycle." << endl;
                return 0;
            }
        }
    }

    cout << "Graph does not contain cycle." << endl;
    return 0;
}
