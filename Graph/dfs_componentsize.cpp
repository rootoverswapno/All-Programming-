#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
int  dfs(int vertex)
{

    visited[vertex]=true;
    int count=1;
    for(auto cheld:graph[vertex])
    {
        if(!visited[cheld])
        {
           count+=dfs(cheld);
        }
        
    }
    return count;
    

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
    vector<int>vv;
    for(int i=1;i<=n;++i)
    {
        if(!visited[i])
        {
            int cct=dfs(i);
             vv.push_back(cct);
        }
       

    }

    for(int num:vv)
    {
        cout<<num<<endl;
    }


return 0;
}