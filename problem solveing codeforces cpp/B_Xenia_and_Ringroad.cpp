#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define ull unsigned long long
using namespace std;

int main()
{
    
    ll n,m;
    cin>>n>>m;
   ll in=1;
     ll ans=0;

    
    for(int i=0;i<m;++i)
    {
        ll x;
        cin>>x;
        if(x>=in)
        {
            ans+=(x-in);
        }
        else
        {
            ans+=(n-(in-x));
        }
        in=x;
    }
    cout<<ans<<endl;
   
    return 0;
}