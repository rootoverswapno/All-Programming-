#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                int diff = a[i] - b[i];
                a[i] -= diff;
                ans++;
                for (int j = i + 1; j < n; ++j) {
                    a[j] = min(a[j], b[j]);
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
