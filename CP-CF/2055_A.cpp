#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){

  int n,a,b;
  cin>>n>>a>>b;
  int dis=abs(a-b);
  if((dis&1)!=1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}