#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 10;
bool check(vector<int>& v, unordered_set<int>& st) {
    for (auto x : v) {
        if (st.find(x) == st.end()) {
            return false;
        }
    }
    return true;
}
void solve_by_Swapno() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> v1(m), v2(k);
    for (auto &x : v1) cin >> x;
    for (auto &x : v2) cin >> x;

    unordered_set<int> st(v2.begin(), v2.end());
    
    string s = "";
    for (int i = 0; i < m; ++i) {
        vector<int> temp;
        for (int j = 1; j <= n; ++j) {
            if (j != v1[i]) {
                temp.push_back(j);
            }
        }

        if (check(temp, st)) {
            s += '1';
        } else {
            s += '0';
        }
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_by_Swapno();
    }
    return 0;
}
