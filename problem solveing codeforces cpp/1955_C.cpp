#include<bits/stdc++.h>
#define pb push_back
#define swapno king of the world  
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto &i:v)
  {
    cin>>i;
  }
  int fast=k/2;
  int last =k-fast;
  int ct=0; 
//   sort(v.begin(),v.end());
 for(int i=n-1;i>=0;--i)
 {
    if(fast>=v[i])
    {
        fast-=v[i];
        ct++;
    }
    else
    {
        break;
    }
 }
 last+=fast;
 for(int i=0;i<n;++i)
 {
    if(last>=v[i])
    {
       last-=v[i];
       ct++;
    }
    else
    {
        break;
    }
 }
 if(ct>=n)
 {
    ct=n;
 }
 cout<<ct<<endl;
   
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
//SWAPNO KING OF THE WORLD..
//NAM TO SUNA HI HOGA......
}
}
