#include <bits/stdc++.h>
using namespace std;

int prims(int V, vector<vector<pair<int, int>>> &adj) {
    vector<int> vis(V, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    int sum = 0;
    pq.push({0, 0}); // {weight, node}

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
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int, int>>> adj(V);

    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << prims(V, adj) << endl;
    return 0;
}
