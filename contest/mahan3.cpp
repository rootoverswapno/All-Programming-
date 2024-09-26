#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'D' && i + 1 < n && s[i + 1] == 'D') {
                count++;
                i++;
            } else if (s[i] == 'C' && i + 1 < n && s[i + 1] == 'D') {
                count++;
                i++;
            }
        }

        cout << n - count << endl;
    }

    return 0;
}