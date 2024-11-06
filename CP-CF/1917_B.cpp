#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Using a set to store unique substrings
        unordered_set<string> distinct_substrings;

        // Generate all suffixes and add them to the set
        for (int i = 0; i < n; ++i) {
            string substring = s.substr(i);
            distinct_substrings.insert(substring);
        }

        // Output the number of unique substrings for the test case
        cout << distinct_substrings.size() << endl;
    }

    return 0;
}