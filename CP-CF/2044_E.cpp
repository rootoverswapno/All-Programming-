#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cy(ll x, ll k, ll l2, ll r2) {
    ll ct = 0;
    ll ck = 1;
    while (ck <= r2) {
        ll y = x * ck;
        if (y > r2) break; 
        if (y >= l2) {
            ct++; 
        }
        if (ck > r2 / k) break;
        
        ck *= k;
    }

    return ct;
}

void solve_by_Swapno() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    ll ct = 0;
    
    for (ll x = l1; x <= r1; ++x) {
        ct += cy(x, k, l2, r2);
    }

    cout << ct << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_by_Swapno();
    }

    return 0;
}
