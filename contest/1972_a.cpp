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
    vv
      vector<int>v2(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (auto &i : v2)
    {
        cin >> i;
    }
    int count=0;
    int j=0;
for(int i=0;i<n;++i)
{
    if(v2[i]<v[j])
    {
        count++;
    }
    else
    {
        j++;
    }
}
cout<<count<<endl;


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