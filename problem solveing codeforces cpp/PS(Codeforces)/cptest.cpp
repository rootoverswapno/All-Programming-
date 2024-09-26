#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool findBalancedSubarray(vector<int>& a) {
    int n = a.size();
    vector<int> prefixOdd(n + 1, 0);
    vector<int> prefixEven(n + 1, 0);

    // Compute prefix sums for odd and even indices separately
    for (int i = 0; i < n; ++i) {
        prefixOdd[i + 1] = prefixOdd[i];
        prefixEven[i + 1] = prefixEven[i];
        if (i % 2 == 0) {
            prefixOdd[i + 1] += a[i];
        } else {
            prefixEven[i + 1] += a[i];
        }
    }

    // Hash maps to store first occurrences of (prefixOdd - prefixEven)
    unordered_map<int, int> oddEvenMap;
    for (int i = 0; i <= n; ++i) {
        int diff = prefixOdd[i] - prefixEven[i];
        if (oddEvenMap.find(diff) != oddEvenMap.end()) {
            if (i - oddEvenMap[diff] >= 2) { // Ensure subarray length is at least 2
                return true;
            }
        } else {
            oddEvenMap[diff] = i;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (findBalancedSubarray(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
