#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> k(n);
        for (int i = 0; i < n; ++i) {
            cin >> k[i];
        }
        
        long long totalK = 0;
        for (int i = 0; i < n; ++i) {
            totalK += k[i];
        }
        
        long long S = totalK - n;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (k[i] - 1 > S - k[i]) {
                found = true;
                // We found a valid way to distribute the coins
                for (int j = 0; j < n; ++j) {
                    if (j == i) {
                        cout << 1 << " ";
                    } else {
                        cout << (k[i] - 1) * k[j] << " ";
                    }
                }
                cout << "\n";
                break;
            }
        }
        
        if (!found) {
            cout << "-1\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
