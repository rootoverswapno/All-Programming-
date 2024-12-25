#include <bits/stdc++.h>
using namespace std;

// Recursive function with memoization
unordered_map<int, int> mp;

int getMaxCoins(int n) {
    // Base case: if n is 3 or less, return 1
    if (n <= 3) return 1;

    // Check if the result is already computed
    if (mp.find(n) != mp.end()) return mp[n];

    // Recursive case: Split the number and calculate maximum coins
    int coinsAfterSplit = max(n, getMaxCoins(n / 2) + getMaxCoins(n / 3) + getMaxCoins(n / 4));

    // Store the result in the memoization map
    mp[n] = coinsAfterSplit;
    return coinsAfterSplit;
}

void solve() {
    int n;
    cin >> n;
    cout << getMaxCoins(n) << endl;
}

int main() {
    solve();
    return 0;
}
