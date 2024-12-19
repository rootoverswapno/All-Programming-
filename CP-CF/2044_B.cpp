#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
string s;
cin>>s;
string ss;
for(int i=s.size()-1;i>=0;--i)
{
  if(s[i]=='q')
  {
    ss+='p';
  }
  else if(s[i]=='p')
  {
    ss+='q';
  }
  else
  {
    ss+='w';
  }
}
cout<<ss<<endl;


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