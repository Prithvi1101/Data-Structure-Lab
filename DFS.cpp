#include <iostream>
#include <vector>
using namespace std;

const int M = 100;  // Maximum number of vertices
vector<int> G[M + 1];
int color[M + 1];
int entry[M + 1];
int finish[M + 1];
int stopwatch = 0;

void DFS(int source) {
    color[source] = 1;
    stopwatch++;
    entry[source] = stopwatch;

    int l = G[source].size();
    for (int i = 0; i < l; i++) {
        int v = G[source][i];
        if (color[v] == 0) {
            DFS(v);
        }
    }

    stopwatch++;
    finish[source] = stopwatch;
}

int main() {
    int n, ne;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> ne;

    cout << "Enter the edges (u v): " << endl;
    for (int i = 1; i <= ne; i++) {
        int u, v;
        cout << "u: ";
        cin >> u;
        cout << "v: ";
        cin >> v;
        G[u].push_back(v);
        G[v].push_back(u);  // Assuming the graph is undirected
    }

    cout << "Adjacency List:" << endl;
    for (int u = 0; u <= M; u++) {
        if (G[u].size() > 0) {
            cout << u << ": ";
            for (int i = 0; i < G[u].size(); i++) {
                cout << G[u][i] << " ";
            }
            cout << endl;
        }
    }

    int source;
    cout << "Enter the starting vertex: ";
    cin >> source;

    for (int u = 1; u <= n; ++u) {
        color[u] = 0;
    }

    cout << "DFS Traversal starting from vertex " << source << ":\n";
    DFS(source);

    cout << "\nEntry and Finish Times:" << endl;
    for (int u = 1; u <= n; ++u) {
        if (entry[u] != 0 || finish[u] != 0) {  // Only print if the vertex was visited
            cout << "Vertex " << u << ": Entry time = " << entry[u] << ", Finish time = " << finish[u] << endl;
        }
    }

    return 0;
}
