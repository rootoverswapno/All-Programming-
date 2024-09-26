#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class solve
{
public:
    solve()
    {
        int n;
        cin >> n;
        vector<ll> v1(n), v2(n);
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v1[i];
            sum1 += v1[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> v2[i];
            sum2 += v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        long long m = min((sum1 + n * v2[0]), (sum2 + n * v1[0]));
        cout << m << endl;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve s;
    }
}