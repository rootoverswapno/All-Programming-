#include <bits/stdc++.h>
using namespace std;
#define V 5  
int minKey(vector<int>& key, vector<bool>& mstSet) {
    int min = INT_MAX, minIndex = -1;
    
    for (int v = 0; v < V; v++) {
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void printMST(vector<int>& parent, vector<vector<int>>& graph) {
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << endl;
}
void primMST(vector<vector<int>>& graph) {
    vector<int> parent(V, -1); 
    vector<int> key(V, INT_MAX); 
    vector<bool> mstSet(V, false); 

    key[0] = 0; 

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet); 
        mstSet[u] = true; 
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    printMST(parent, graph);
}
int main() {
    vector<vector<int>> graph = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    primMST(graph);

    return 0;
}
