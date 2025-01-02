#include <bits/stdc++.h>
//swapno the king of graph
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int>graph[n + 1];
    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    vector<bool> vis(n + 1, false);
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (!vis[v] && v > u) { 
                vis[v] = true;
                q.push(v);
            }
        }
    }
    bool all = true;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            all = false;
            break;
        }
    }
    if (all) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
