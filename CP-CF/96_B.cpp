#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Recursive function to generate super lucky numbers
void generateSuperLucky(string current, int count4, int count7, int maxLength, vector<long long> &result) {
    // Base case: If the number's length exceeds maxLength
    if (current.size() > maxLength) return;

    // Add to the result if the counts of 4 and 7 are equal
    if (count4 == count7 && count4 > 0) {
        result.push_back(stoll(current));
    }

    // Recursive calls to add '4' and '7'
    generateSuperLucky(current + "4", count4 + 1, count7, maxLength, result);
    generateSuperLucky(current + "7", count4, count7 + 1, maxLength, result);
}

int main() {
    long long n;
    cin >> n;

    vector<long long> superLuckyNumbers;

    // Generate super lucky numbers up to a reasonable length
    for (int length = 2; length <= 10; ++length) { // Starting from length 2 because at least 1 '4' and 1 '7' are needed
        generateSuperLucky("", 0, 0, length, superLuckyNumbers);
    }

    // Sort the generated numbers
    sort(superLuckyNumbers.begin(), superLuckyNumbers.end());

    // Use binary search to find the smallest number >= n
    auto it = lower_bound(superLuckyNumbers.begin(), superLuckyNumbers.end(), n);

    // Output the result
    if (it != superLuckyNumbers.end()) {
        cout << *it << endl;
    }

    return 0;
}
 