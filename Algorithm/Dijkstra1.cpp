#include<bits/stdc++.h>
using namespace std;
void dijkstra(int source,int n,vector<pair<int,int>>&adj[])
{
    vector<int>dis(n+1,INT_MAX);
    // dis[source]=0;
       
}

int main()
{
int n,m;
cin>>n>>m;
vector<pair<int,int>>adj[n+1];
for(int i=0;i<m;++i)
{
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
int source;
cout<<"Enter Source node : ";
cin>>source;
dijkstra(source,n,adj);



return 0;
}