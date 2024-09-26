#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr[i] = to_string(num);
        }

        string ans = "YES";
        int prev = 0;
        string first = arr[0];
        if (first.length() == 1) {
            prev = first[0] - '0';
        } else {
            int val1 = first[0] - '0';
            int val2 = first[1] - '0';
            if (val1 <= val2) {
                prev = val2;
            } else
                prev = stoi(first);
        }

        for (int i = 1; i < n; i++) {
            string s = arr[i];
            if (s.length() == 1) {
                int val = s[0] - '0';
                if (val < prev) {
                    ans = "NO";
                    break;
                } else {
                    prev = val;
                }
            } else {
                int val1 = s[0] - '0';
                int val2 = s[1] - '0';
                int both = stoi(s);

                if (val1 <= val2) {
                    if (prev <= val1) {
                        prev = val2;
                    } else {
                        if (both >= prev) {
                            prev = both;
                        } else {
                            ans = "NO";
                        }
                    }
                } else {
                    if (both >= prev) {
                        prev = both;
                    } else {
                        ans = "NO";
                    }
                }
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}
