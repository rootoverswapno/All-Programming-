#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        int n = v.size();
        vector<vector<int>> vv;

        // Generate contiguous subsets
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                vector<int> p;
                for (int k = i; k <= j; ++k) { 
                    p.push_back(v[k]);
                }
                vv.push_back(p);
            }
        }
        vv.push_back({}); // Add the empty subset
        return vv;
    }
};
int main() {
    Solution solution;
    vector<int> v = {1, 2, 3};

   
    vector<vector<int>> result = solution.subsets(v);

    // Print the subsets
    cout << "Subsets:\n";
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {           cout << num << " ";
        }
        cout << "}\n";
    }

    return 0;
}