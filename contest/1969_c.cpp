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
    int n, k;
    cin >> n >> k;
    vv for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int lo = 0;
    int hi = v.size() - 1;
    int nn=v.size();
    int sum=0;
    for(auto &i:v)
    {
       sum+=i;
    }

    for(int i =0;i<k;++i)
    {
      sum=(sum-(v[hi]-v[i]));
      hi--;
    }  
    cout<<sum<<endl;
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