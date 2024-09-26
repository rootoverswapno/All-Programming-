#include <bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n), v1(m);
        for (auto &i : v)
        {
            cin >> i;
        }
        for (auto &i : v1)
        {
            cin >> i;
        }
        int c = 0;
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = 0; j < v1.size(); ++j)
            {
                if (v[i] + v1[j] <= k)
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << c << endl;
    }
}