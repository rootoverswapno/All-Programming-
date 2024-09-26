#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.length();
        int result = n;

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'C' && s[i + 1] == 'D') {
                result -= 2; 
            } else if (s[i] == 'D' && s[i + 1] == 'D') {
                result -= 1; 
            }
        }

        cout << result << endl;
    }

    return 0;
}