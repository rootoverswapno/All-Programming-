#include<bits/stdc++.h>
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define vv vector<int>v(n);
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    map<int,int>mp;
    for(auto &i:v)
    {
        mp[i]++;
    }
    int c=0;
  for(auto &p:mp)
  {
    if(p.second>2)
    {
        c+=(p.second/3);
    }
  }
  cout<<c<<endl;

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
//@SWAPNO_MOY