#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve_de()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    sum = sum + a;
    int r = b % 3;
    if (b % 3 == 0)
    {
        sum = sum + b / 3;
        if (c % 3 == 0)
        {
            sum = sum + c / 3;
        }
        else
        {
            sum = sum + c / 3 + 1;
        }
        cout << sum << endl;
        return;
    }
    if (c >= 3 - r)
    {

        b = b + (3 - r);
        sum = sum + b / 3;
        c = c - (3 - r);
        if (c % 3 == 0)
        {
            sum = sum + c / 3;
        }
        else
        {
            sum = sum + c / 3 + 1;
        }
        cout << sum << endl;
        return;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve_de();
    }
}