#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
    vector<int>v(k+1,0);
    for(int i=0;i<k;++i)
    {
       int b,c;
       cin>>b>>c;
       v[b]+=c;
    }
    sort(v.rbegin(),v.rend());
    int sum=0;
    for(int i=0;i<=min(n,k);++i)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
        
    }
    return 0;
}