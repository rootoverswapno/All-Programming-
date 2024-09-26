#include<bits/stdc++.h>
#define swapno king of the world  
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
   sort(v.begin(),v.end());
  int ans=1;
  int mid=n/2;
  if(n%2==0)
  {
    mid--;
  }
  for(int i=mid+1;i<n;++i)
  {
    if(v[i]==v[mid])
    {
        ans++;
    }
    else
    {
        break;
    }
  }
  cout<<ans<<endl;
 

}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
}
}