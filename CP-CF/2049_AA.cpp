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
  vector<int>v(n);
  for(auto &i:v)
  {
    cin>>i;
  }
  if(all_of(v.begin(),v.end(),[](int x){return x==0;}))
  {
    cout<<0<<endl;
    return;
  }
  while(!v.empty()&&v.front()==0)
  {
    v.erase(v.begin());
  }
  while(!v.empty()&&v.back()==0)
  {
    v.pop_back();
  }
  if(count(v.begin(),v.end(),0)>0)
  {
    cout<<2<<endl;
  }
  else
  {
    cout<<1<<endl;
  }

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