#include <bits/stdc++.h>
using namespace std;

int prims(int v, vector<vector<pair<int, int>>> &adj) {
    vector<int> vis(v, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq
    int sum = 0;
    pq.push({0, 0}); 
    while (!pq.empty()) {
        auto [wt, node] = pq.top();
        pq.pop();

        if (vis[node]) continue;
        vis[node] = 1;
        sum += wt;

        for (auto [adjv, adjwt] : adj[node]) {  
            if (!vis[adjv]) {
                pq.push({adjwt, adjv});
            }
        }
    }
    return sum;
}

int main() { 
    int v, e;
    cin >> v >> e;
    vector<vector<pair<int, int>>> adj(v);

    for (int i = 0; i < e; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << prims(v, adj) << endl;
    return 0;
}
