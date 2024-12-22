#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
  int n;
  cin>>n;
  vector<int>v1(n),v2(n);
  for(auto &i:v1)
  {
    cin>>i;
  }
  for(auto &i:v2)
  {
    cin>>i;
  }
  int mx=0;
  if(n==1)
    {
        cout<<v1[0]<<endl;
        return;
    }
    vector<int>v(n);
  for(int i=0;i<n;++i)
  {
    if(i+1<n)
    {
        v[i]=(v1[i]-v2[i+1]);
    }
    else
    {
        v[i]=v1[i];
    }
   
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;++i)
  {
    if(v[i]>0)
    {
          mx+=v[i];
    }
  }

  cout<<mx<<endl;
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