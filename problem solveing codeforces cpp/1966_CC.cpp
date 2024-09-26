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
  int n,k;
  cin>>n>>k;
  vv
    unordered_map<int,int>mp;
  for(auto &i:v)
  {
    cin>>i;
    // mp[i]++;
  }
//   sort(v.begin(),v.end(),greater<int>());

  for(int i=0;i<n;++i)
  {
    mp[v[i]]++;
  }
   bool ok=false;
  for(auto &i:mp)
  {
    if(i.second>=k)
    {
        ok=true;
    }
  }
  if(ok)
  {
    cout<<k-1<<endl;
  }
  else
  {
    cout<<n<<endl;
  }

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