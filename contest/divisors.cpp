#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve_de_vai()
{
    ll n;
    cin >> n;
    ll c = 0;

    for (int i = 1; i <= sqrt(n); ++i)
    {

        if (n % i == 0)
        {
            if (n / i == i)
            {
                c++;
            }
            else
            {
                c += 2;
            }
        }
    }
    if (c % 2 != 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve_de_vai();
    }
}