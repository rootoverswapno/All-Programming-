#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.rbegin(),v.rend());
    int ans=0;

    int mx=v[0];
    int mn=v[n-1];
     
    vector<int>vv(n,mn);
    
        for(int i=1;i<n;++i)
        {
            ans+=mx-vv[i];
        }
    
    cout<<ans<<endl;
}


return 0;
}