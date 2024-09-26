#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string findWinner(vector<int>& piles) {
    sort(piles.begin(), piles.end()); // Sort the piles in ascending order

    int xorSum = 0;
    for (int pile : piles) {
        xorSum ^= (pile % 2 == 0 ? pile - 1 : pile); // Calculate the xor sum of all piles after Alice's turn
    }

    return xorSum == 0 ? "Bob" : "Alice"; // If xor sum is 0, Bob wins; otherwise, Alice wins
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of piles
        vector<int> piles(n);
        for (int i = 0; i < n; i++) {
            cin >> piles[i]; // Input the initial number of stones in each pile
        }
        string winner = findWinner(piles);
        cout << winner << endl; // Output the winner for each test case
    }
    return 0;
}
