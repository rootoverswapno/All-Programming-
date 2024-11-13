#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
bool dfs(int vertex,int i)
{
    if(vertex==i)
    {
        return true;
    }
    visited[vertex]=true;
    for(auto cheld:graph[vertex])
    {
        if(!visited[cheld])
        {
           if(dfs(cheld,i)) 
           {
            return true;
           }
        }
        
    }
    return false;

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
    int p1,p2;
    cin>>p1>>p2;
    if(dfs(p1,p2))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


return 0;
}