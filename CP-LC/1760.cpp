#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isFeasible(const vector<int>& nums, int maxOperations, int penalty) {
    int operations = 0;
    for (int balls : nums) {
        if (balls > penalty) {
            operations += (balls - 1) / penalty;
        }
        if (operations > maxOperations) {
            return false;
        }
    }
    return true;
}

int minimizePenalty(vector<int>& nums, int maxOperations) {
    int low = 1, high = *max_element(nums.begin(), nums.end());
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isFeasible(nums, maxOperations, mid)) {
            result = mid;    // Update result with feasible penalty
            high = mid - 1;  // Try to find a smaller penalty
        } else {
            low = mid + 1;   // Increase the penalty
        }
    }

    return result;
}

int main() {
    vector<int> nums = {9};
    int maxOperations = 2;
    cout << minimizePenalty(nums, maxOperations) << endl; // Output: 4
    return 0;
}
