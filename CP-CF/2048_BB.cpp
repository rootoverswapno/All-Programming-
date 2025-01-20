#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
int n,k;
cin>>n>>k;
int test=k-1;
vector<int>v(n,0);
int ct=1;
  for(int i=k-1;i<n;i+=k)
  {
    v[i]=ct++;
  }
  for(int i=0;i<n;++i)
  {
    if(v[i]==0)
    {
        v[i]=ct++;
    }
  }
  for(auto &i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

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