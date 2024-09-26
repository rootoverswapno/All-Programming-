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
int n,x,y;
cin>>n>>x>>y;
vv
for(auto &i:v) 
{
    cin>>i;
}
int ans=0;
map<pair<int,int>,int>mp;
for(int i=0;i<n;++i)
{
   int v1=(v[i]%x);
   int v2=(v[i]%y);
   int req1=(x-v1)%x;
   int req2=v2;
   ans+=(mp[{req1,req2}]);
   mp[{v1,v2}]++;
}
cout<<ans<<endl;


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