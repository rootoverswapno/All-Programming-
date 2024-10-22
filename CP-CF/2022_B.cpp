#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    //swapno nam to suna hi hoga
    //one day will bw red coder
   ll t;
   cin>>t;
   while(t--)
   {
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    ll sum=0;
    ll mx=INT_MIN;
    for(ll i=0;i<n;++i)
    {
        cin>>v[i];
        sum+=v[i];
        mx=max(mx,v[i]);
    }
    ll res=(sum+x-1)/x;
    cout<<max(mx,res)<<endl;

   }



return 0;
}