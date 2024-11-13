#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
vector<vector<int>>cc;
vector<int>connected_cc;
bool visited[N];
void dfs(int vertex)
{
    // cout<<vertex<<"  ";
    connected_cc.push_back(vertex);
    visited[vertex]=true;
    for(auto cheld:graph[vertex])
    {
        // cout<<"par : "<<vertex<<"  chield : "<<cheld<<endl;
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
    cin>>n>>k;    
    for(int i=0;i<k;++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ct=0;
     for(int i=1;i<=n;++i)
     {
         connected_cc.clear();
        if(visited[i])
        {
            continue;
        }
        dfs(i);
        ct++;
        cc.push_back(connected_cc);
     }
     
     cout<<endl;
     for(auto &i:cc)
     {
        for(auto &j:i)
        {
            cout<<j<< " ";
        }
        cout<<endl;
     }
     cout<<endl;
     cout<<ct<<endl;
    


return 0;
}