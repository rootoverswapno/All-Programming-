#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to calculate the N-th valid number in Kurup's sequence
ll findNthKurupNumber(ll n) {
    ll result = 0, base = 1;

    while (n > 0) {
        // Map base-9 (ignoring 7 and 8)
        result += (n % 9) * base;
        n /= 9;
        base *= 10;
    }
    return result;
}

void solve_by_Swapno() {
    ll n;
    cin >> n;
    cout << findNthKurupNumber(n) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_by_Swapno();
    }
    return 0;
}
