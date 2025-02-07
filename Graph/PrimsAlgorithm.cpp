#include<bits/stdc++.h>
using namespace std;
int prims(int V,vector<vector<pair<int,int>>>&adj)
{
    vector<int>vis(V,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int sum=0;
    pq.push({0,0});
    while(!pq.empty())
    {
        auto it=pq.top();
        pq.pop();
        int wt=it.first;
        int node=it.second;

        if(vis[node])continue;
        vis[node]=1;
        sum+=wt;
        for(auto i:adj[node])
        {
            int adjv=i.first;
            int adjwt=i.second;
            if(!vis[adjv])
            {
                pq.push({adjwt,adjv});
            }
        }
    }
    return sum;
}
int main()
{ 
   int v,e;
   cin>>v>>e;
   vector<vector<pair<int,int>>>adj(v);
   for(int i=0;i<e;++i)
   {
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back({v,w});
      adj[v].push_back({u,w});
   }
   int result=prims(v,adj);
   cout<<result<<endl;



return 0;
}