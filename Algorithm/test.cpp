#include <bits/stdc++.h>
using namespace std;
bool targetsum(const vector<int>&v, int target) {
    set<int> st;
    for (int num : nums) {
        int complement = target - num;
        if (st.find(complement) != st.end()) {
            cout << "Found elements: " << num << " and " << complement << endl;
            return true;
        }
        st.insert(num);
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int target = 20;
    if (targetsum(v, target)) {
        cout << "Yes, there exists a pair with sum " << target << endl;
    } else {
        cout << "No pair with sum " << target << " found" << endl;
    }

    return 0;
}
