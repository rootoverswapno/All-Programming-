#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve_de() {
    int x, y;
    int ans=0;
    cin >> x >> y;
     int sum=x+(y*4);
     int ct=0;
    if(y>2)
    {
        if(sum%15==0)
        {
            ct=sum/15;
        }
        else
        {
            ct=sum/15+1;
        }
        if(y%2==0)
        {
            cout<<max(y/2,ct)<<endl;
        }
        else
        {
            cout<<max((y/2)+1,ct)<<endl;
        }
    }
    else
    {
        if(sum==0)
        {
            cout<<0<<endl;
        }
        if(sum<15&&sum!=0)
        {
            cout<<1<<endl;
        }
        if(sum>=15&&sum%15==0)
        {
            cout<<sum/15<<endl;
        }
        else
        {
            cout<<sum/15+1<<endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;
    while (test_case--) {
        solve_de();
    }

    return 0;
}
