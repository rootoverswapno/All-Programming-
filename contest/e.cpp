#include <bits/stdc++.h>
long long mod = 1e9 + 7;
#define pb push_back
#define swapno king of the world
#define vv vector<int> v(n);
#define int long long
using namespace std;
 int n;
// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;
// Mathematical functions
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
} //__gcd
int lcm(int a, int b) { return (a / gcd(a, b) * b); }
// Code by Swapnomoy Biswas
// Language C++
// Practice->Success
int check(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x*check(x-1);
    }
}
void solve_de()
{
    // rootover swapno.......
    // Solve Here
   
    cin >> n;
    vv 
    for (auto &i : v)
    {
        cin >> i;
    }
    int count = 0;
    
for(int i=0;i<n;++i)
{
    int x=v[i];
    for(int i=1;i<=64;++i)
    {
      if(x==(2<<i))
      {
        count++;
        break;
      }
    }
   
}
cout<<check(count)+1<<endl;
    // cout << count << endl;
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
        // NAM TO SUNA HI ......
    }
}
//@SWAPNO_MOY