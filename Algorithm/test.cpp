#include <bits/stdc++.h>
using namespace std;
bool targetsum(const vector<int>&v, int target) {
    set<int> st;
    for (int num : nums) {
        int complement = target - num;
        if (st.find(complement) != st.end()) {
            cout << "Found elements: " << num << " and " << complement << endl;
            return true;
        }
        st.insert(num);
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int target = 20;
    if (targetsum(v, target)) {
        cout << "Yes, there exists a pair with sum " << target << endl;
    } else {
        cout << "No pair with sum " << target << " found" << endl;
    }

    return 0;
}



#include <iostream>
#include <vector>

using namespace std;

const int N = 50;
vector<int> graph[N];
bool visited[N];

void dfs(int node) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int totalMatches = n * (n - 1) / 2 - 1;

    // Read input and construct the graph
    for (int i = 0; i < totalMatches; ++i) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    // Perform DFS and identify the two components
    // Track if we've seen all the components
    int componentStart = -1;

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            if (componentStart == -1) {
                componentStart = i;  // Mark the first unvisited node
            } else {
                // If we've found a second unvisited node, this gives us the missing edge
                cout << componentStart << " " << i << endl;
                return 0;
            }
            dfs(i);  // Mark all nodes in the component
        }
    }

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x, y;
    cin >> n;

    vector<int> v(n + 1, 0), wins(n + 1, 0);
    int totalGames = n * (n - 1) / 2 - 1;

    // Read matches and update counters
    for (int i = 0; i < totalGames; ++i) {
        cin >> x >> y;
        v[x]++;
        v[y]++;
        wins[x]++;
    }

    // Identify two players missing a match
    int player1 = -1, player2 = -1;
    for (int i = 1; i <= n; ++i) {
        if (v[i] != n - 1) {
            if (player1 == -1) {
                player1 = i;
            } else {
                player2 = i;
                break;
            }
        }
    }

    // Output the result based on who has fewer wins
    if (wins[player1] < wins[player2]) {
        cout << player2 << " " << player1 << endl;
    } else {
        cout << player1 << " " << player2 << endl;
    }

    return 0;
}
