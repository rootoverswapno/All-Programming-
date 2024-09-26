#include <bits/stdc++.h>
#define int long long
#define v(n) vector<int> v(n)
#define o cout <<
#define in cin >>
using namespace std;

void solve_de_vai()
{
    int n;
    in n;
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout<<"YES" << endl;
        int var = 0;
        for(int i=n;i>=0;--i)
        {
            if (var % 2 == 0)
            {
                cout << "SS";
                var = 1;
            }

            else
            {
                cout << "PP";
                var = 0;
            }
            i -= 2;
        }
        cout<<endl;
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
