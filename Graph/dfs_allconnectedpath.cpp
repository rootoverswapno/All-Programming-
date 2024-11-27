#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex)
{

    visited[vertex]=true;
    for(auto cheld:graph[vertex])
    {
        if(visited[cheld])
        {
           continue;
        }
        dfs(cheld);
        
    }
  
}
int main()
{
    int n,k;
    cin>>n>>k;    for(int i=0;i<k;++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
   
return 0;
}