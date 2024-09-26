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
 vector<int>v(n,0);
 int r_sum=0;
 for(int i=30;i>=0;--i)
 {
    if(r_sum>=(1<<i)&&(n>1))
    {
        v[n - 1] | (1 << i);
        r_sum-=(1<<i);
        n--;
    }
 }
//  for(int i=0;i<n-1;++i)
//  {
//     v[i]=1;
//     k--;
//  }
//    v[n-1]=k;
 for(int i=0;i<v.size();++i)
 {
    cout<<v[i]<<" ";
 }
 cout<<endl;

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