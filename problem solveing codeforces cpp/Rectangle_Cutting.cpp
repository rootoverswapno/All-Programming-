#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }

        if (((b % 2 == 1) && (a % 2 == 1)) || ((a % 2 == 1) &&( b == 2 * a)))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
int main()
{

    solve();
    return 0;
}