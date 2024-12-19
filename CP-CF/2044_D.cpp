#include <bits/stdc++.h>
using namespace std;
void solve_by_Swapno() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];  
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve_by_Swapno();
    }
    
    return 0;
}
