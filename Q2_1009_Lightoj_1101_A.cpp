#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int> graph[MAX];
int lyk = 0, vamp = 0;
int color[MAX];

// black = 0 = vamp
// white = 1 = unvisited
// red = 2 = lykans
void bfs(int n) {
    queue<int> q;
    q.push(n);
    color[n] = 0; // initially black
    vamp++;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < graph[x].size(); i++) {
                //adjacent nodes/adjacency list
            int u = graph[x][i];
            if (color[u] == 1) { // if adjacent node u is unvisited
                q.push(u);
                if (color[x] == 0) {
                    color[u] = 2; //if vamp then child node lykan
                    lyk++;
                } else {
                    color[u] = 0; //and if lykan then child node vamp
                    vamp++;
                }
            }
        }
    }
}

int main() {
    int t, tc = 0;
    scanf("%d", &t);
    while (t--) {
        int n, u, v, ans = 0;
        scanf("%d", &n);

        // Reset graph and colors for each test case
        for (int i = 0; i < MAX; i++) {
            graph[i].clear();
            color[i] = 1; // reset color to white (unvisited)
        }

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for (int i = 0; i < MAX; i++) {
            vamp = 0, lyk = 0;
            if (color[i] == 1 && !graph[i].empty()) {
                bfs(i);
                ans += max(vamp, lyk);
            }
        }
        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}
