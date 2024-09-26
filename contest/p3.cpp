#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long sum = 0;
    
    long long r=n%9;
      long long s=n/9;
      while(r--)
      {
        sum+=(9*(s+r));
      }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}