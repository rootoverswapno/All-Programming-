#include <bits/stdc++.h>
long long mod = 1e9 + 7;
#define pb push_back
#define swapno king of the world
#define vv vector<int> v(n);
#define int long long
using namespace std;

void solve_de()
{
    // rootover swapno.......
       int n;
    cin >> n;
    int a = 0;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
        a = max(a, v[i]);
    }
    a *= 2;
    cout << a << " ";
    for (int i = 0; i < n - 1; i++) {
        a += v[i];
        cout << a << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve_de();
        // SWAPNO KING OF THE WORLD..
        // NAM TO SUNA HI HOGA......
    }
}
//@SWAPNO_MOY