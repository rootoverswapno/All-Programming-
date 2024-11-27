#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void bfs(int vertex)
{
   queue<int>q;
   visited[vertex]=true;
   q.push(vertex);
   vector<int>bfs;
   while (!q.empty())
   {
     int node=q.front();
     q.pop();
     bfs.push_back(node);

     for(auto &it:graph[node])
     {
        if(!visited[it])
        {
            visited[it]=true;
            q.push(it);
        }
     }
          
   }

   for(auto &i:bfs)
   {
    cout<<i<<" ";
   }
   cout<<endl;
   
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;++i)
  {
    int v1,v2;
    cin>>v1>>v2;
    graph[v1].push_back(v2);
    graph[v2].push_back(v1);
  }
  int node;
  cin>>node;
  bfs(node);
return 0;
}