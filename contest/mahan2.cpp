#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] < a[i - 1]) {
                possible = false;
                break;
            }
            int diff = min(a[i], a[i + 1] - 1);
            a[i] -= diff;
            a[i - 1] -= diff;
            a[i + 1] -= diff;
        }

        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
