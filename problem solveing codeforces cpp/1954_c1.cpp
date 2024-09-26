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
 string x,y;
 cin>>x>>y;
 if(x<y)
 {
    swap(x,y);
 }
 bool yes=false;
 for(int i=0;i<x.size();++i)
 {
    if(x[i]>y[i]&&yes)
    {
        swap(x[i],y[i]);
    }
    if(x[i]!=y[i])
    {
        yes=true;
    }
 }
 cout<<x<<endl;
 cout<<y<<endl;

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