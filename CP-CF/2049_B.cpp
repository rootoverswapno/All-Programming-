#include <bits/stdc++.h>
using namespace std;

bool check_permutation(const string& s) {
    int n = s.size();
    vector<int> perm(n, 0);  // পারমুটেশন রাখা হবে এখানে
    
    int left = 0, right = n - 1;

    // 'p' এবং 's' অনুসারে পারমুটেশন ফিল করা
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'p') {
            if (perm[i] != 0) return false;  // যদি আগে থেকেই পূর্ণ থাকে
            perm[i] = left + 1;
            ++left;
        } else if (s[i] == 's') {
            if (perm[i] != 0) return false;  // যদি আগে থেকেই পূর্ণ থাকে
            perm[i] = right + 1;
            --right;
        }
    }

    // '.' স্থানে যেকোনো সংখ্যা ফিল করা
    for (int i = 0; i < n; ++i) {
        if (perm[i] == 0) {
            if (left <= right) {
                perm[i] = left + 1;
                ++left;
            } else {
                perm[i] = right + 1;
                --right;
            }
        }
    }

    // পারমুটেশনটি সঠিক কিনা চেক করা
    set<int> values;
    for (int i = 0; i < n; ++i) {
        if (values.count(perm[i])) return false; // কোনো দ্বৈত মান নেই
        values.insert(perm[i]);
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // পারমুটেশন তৈরি করা সম্ভব কিনা চেক করা
    if (check_permutation(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t; // টেস্ট কেসের সংখ্যা
    while (t--) {
        solve();
    }
    return 0;
}
