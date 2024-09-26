#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n=3;
        vector<int> vv(n);
        for (int i=0;i<n;++i)
        {
            cin >> vv[i];
        }
        sort(vv.begin(), vv.end());
        int c = 5;
        while (inc > 0)
        {
            vv[0]++;
            c--;
            sort(vv.begin(), vv.end());
        }
        int mx = 0;
        mx = vv[0] * vv[1] * vv[2];
        cout << mx << endl;

        
    }
}
