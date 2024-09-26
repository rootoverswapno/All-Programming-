#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve_de_vai()
{
    int n,k;
    int p=2023;
    ll ans=1;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
        ans*=v[i];
    }
    if(p%ans==0)
    {
        cout<<"YES"<<endl;
        cout<<p/ans<<" ";
        for(int i=1;i<k;++i)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
int32_t main()
{ 
    int t;
    cin>>t;
while(t--)
{ 
   solve_de_vai();
}
}