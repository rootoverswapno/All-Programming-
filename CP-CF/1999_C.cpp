#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){

int n,s,m;
cin>>n>>s>>m;

vector<pair<int,int>>pr(n);

 for(int i=0;i<n;++i)
 {
    cin>>pr[i].first>>pr[i].second;
 }

 sort(pr.begin(),pr.end());
  if(pr[0].first>=s)
  {
    cout<<"YES"<<endl;
    return;
  }
  for(int i=1;i<n;++i)
  {
    if(pr[i].first-pr[i-1].second>=s)
    {
        cout<<"YES"<<endl;
        return;
    }
  }

  if(m-pr[n-1].second>=s)
  {
    cout<<"YES"<<endl;
    return;
  }

  cout<<"NO"<<endl;

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