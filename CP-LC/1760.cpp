#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool canAchievePenalty(vector<int>& nums, int penalty, int maxOperations) {
    int operations = 0;
    for (int balls : nums) {
        if (balls > penalty) {
            operations += (balls - 1) / penalty; // Calculate operations needed to make all bags <= penalty
        }
    }
    return operations <= maxOperations;
}

int minimumPenalty(vector<int>& nums, int maxOperations) {
    int left = 1;                          // Minimum possible penalty
    int right = *max_element(nums.begin(), nums.end()); // Maximum possible penalty
    int result = right;

    for (int penalty = left; penalty <= right; ++penalty) {
        if (canAchievePenalty(nums, penalty, maxOperations)) {
            result = penalty;
            break;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {2,4,8,2};
    int maxOperations = 4;
    cout << "Minimum Penalty: " << minimumPenalty(nums, maxOperations) << endl;
    return 0;
}
