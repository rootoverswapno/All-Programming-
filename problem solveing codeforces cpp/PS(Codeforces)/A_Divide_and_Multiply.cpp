#include<bits/stdc++.h>
#define pb  push_back
#define ll  long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<ll>v;
    ll n;
    cin>>n;
    for(ll i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        v.pb(x); 
    }
    ll x=0;
    ll sum=0,a=0;
    for(ll i=0;i<n;++i)
    {
        while(v[i]%2==0)
        {
             v[i]=v[i]/2;
            x++; 
        }
        a=max(a,v[i]) ;
        sum=sum+v[i];
    }
    sum-=a;
    ll b;
    b=pow(2,x);
    cout<<sum+a*b<<endl;
    }
    return 0;
} 
