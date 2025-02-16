#include <iostream>
#include <vector>
#include <queue>
#define inf ((1<<31)-1)
#define M (100)

using namespace std;

int main() {
    vector<int> G[M + 1];
    int level[M + 1];
    int color[M + 1];


    for (int i = 0; i <= M; i++) {
        color[i] = 0;  // 0 indicates not visited
        level[i] = inf;  // Initialize levels to infinity
    }

    int ne;
    cout << "Enter number of edges:" << endl;
    cin >> ne;

    for (int i = 1; i <= ne; i++) {
        int u, v;
        cout << "Enter u and v:" << endl;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);  // Because the graph is undirected and unweighted
    }

    int src;
    cout << "Enter the source vertex for BFS:" << endl;
    cin >> src;

    queue<int> q;
    color[src] = 1;  // Mark the source node as visited
    level[src] = 0;  // The level of the source node is 0
    q.push(src);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        int l = G[u].size();

        for (int i = 0; i < l; i++) {
            int v = G[u][i];
            if (color[v] == 0) {
                color[v] = 1;  // Mark the node as visited
                q.push(v);
                level[v] = level[u] + 1;  // Set the level of the node
            }
        }
    }

    cout<<"The adjacency list: "<<endl;
      for(int u=1;u<=M;u++){
        int l=G[u].size();
        for(int i=0;i<=l-1;i++){
            cout<<G[u][i]<<" ";
        }
        cout<<endl;
    }

    // Output the levels of all nodes (optional)
    for (int i = 1; i <= M; i++) {
        if (level[i] != inf) {  // Print only if the node was visited
            cout << "Vertex: " << i << " Level: " << level[i] << endl;
        }
    }

    return 0;
}
