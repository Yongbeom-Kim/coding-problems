#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool visited[950];
vector<vector<int>> graph;

int main() {
    int N; long M;

    scanf("%d %ld", &N, &M);

    for (int i = 0; i < N+5; i ++) {
        graph.push_back({});
    }

    while (M--) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int v = q.front();q.pop();
        visited[v] = true;
        for (auto it = graph[v].begin(); it != graph[v].end(); it ++) {
            if (!visited[*it]) {
                visited[*it] = true;
                q.push(*it);
            }
        }
    }

    if (N-accumulate(visited+1, visited+N+1, 0) != 0) {
        printf("NO");
    } else {
        printf("YES");
    }
}