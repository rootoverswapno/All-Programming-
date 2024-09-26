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
unordered_map<int,int>fre;
for(int i=0;i<n;++i)
{
    int x;
    cin>>x;
    v.push_back(x);
    fre[x]++;
}
if(fre.size()==1)
{
    cout<<-1<<endl;
    return;
}
int x=v[0];
int c=0;
int ans=n;
for(int i=0;i<n;++i)
{
    if(v[i]==v[0])
    {
        c++;
    }
    else
    {
        ans=min(ans,c);
    }
}
ans=min(ans,c);
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