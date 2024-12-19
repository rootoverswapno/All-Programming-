#include <bits/stdc++.h>
using namespace std;
int xor_value(const string &s1, const string &s2) {
    int result = 0;
    int len1 = s1.length(), len2 = s2.length();
    int max_len = max(len1, len2);
    for (int i = 0; i < max_len; ++i) {
        int bit1 = i < len1 ? s1[i] - '0' : 0;
        int bit2 = i < len2 ? s2[i] - '0' : 0;
        result |= (bit1 ^ bit2) << (max_len - 1 - i);
    }
    return result;
}
void solve_by_Swapno() {
    string s;
    cin >> s;
    int n = s.length();

    int max_xor = -1;
    tuple<int, int, int, int> best_pair;
    for (int l1 = 0; l1 < n; ++l1) {
        for (int r1 = l1; r1 < n; ++r1) {
            string sub1 = s.substr(l1, r1 - l1 + 1);
            for (int l2 = 0; l2 < n; ++l2) {
                for (int r2 = l2; r2 < n; ++r2) {
                    string sub2 = s.substr(l2, r2 - l2 + 1);
                    int current_xor = xor_value(sub1, sub2);
                    if (current_xor > max_xor) {
                        max_xor = current_xor;
                        best_pair = make_tuple(l1 + 1, r1 + 1, l2 + 1, r2 + 1);  
                    }
                }
            }
        }
    }
    cout << get<0>(best_pair) << " " << get<1>(best_pair) << " "
         << get<2>(best_pair) << " " << get<3>(best_pair) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_by_Swapno();
    }
    return 0;
}
