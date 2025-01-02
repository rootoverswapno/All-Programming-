#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    map<int, int> beauty; // Stores cumulative beauty values for relevant days
    
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Bloom day
        beauty[a] += c;
        // Fade day
        beauty[b] += c;
        // Transition day
        int transitionDay = (a + b) / 2;
        beauty[transitionDay] += c / 2;
    }
    
    // Find the day with maximum beauty value
    int maxBeauty = 0, bestDay = LLONG_MAX;
    for (auto &[day, value] : beauty) {
        if (value > maxBeauty || (value == maxBeauty && day < bestDay)) {
            maxBeauty = value;
            bestDay = day;
        }
    }
    
    cout << bestDay;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
