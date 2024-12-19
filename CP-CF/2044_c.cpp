#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){

int m,a,b,c;
cin>>m>>a>>b>>c;
int ct=0;

    if(a<=m)
    {
       ct+=a;
    }
    else
    {
        ct+=m;
    }
    if(b<=m)
    {
         ct+=b;
    }
    else
    {
          ct+=m;
    }
    int total=2*m;
     int ct1=total-ct;

     if(c<=ct1)
     {
        ct+=c;
     }
     else
     {
        ct+=ct1;
     }
     cout<<ct<<endl;

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