#include<bits/stdc++.h>
#define int long long 
using namespace std;

void solve_de_vai()
{
 int n;
 cin>>n;
 vector<int>v(n);
 map<int,int>mp;
  for(auto &i:v)
  {
    cin>>i;
  }
  int gcdl=0;
  for(int i=0;i<n;++i)
  {
      gcdl=(__gcd(gcdl,v[i]));
      mp[v[i]]++;
  }
  sort(v.begin(),v.end());
  if(mp[v[0]]==1)
  {
    cout<<"YES"<<endl;
    return;
  }
  if(gcdl==v[0])
  {
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
    return;
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