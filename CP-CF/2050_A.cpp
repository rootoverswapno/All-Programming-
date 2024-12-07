#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve(){
   int n,m;
   cin>>n>>m;
   vector<string>vs(n);
   for(auto &i:vs)
   {
       cin>>i;
   }
   int ct=0;
   int total_lenght=0;

   for(auto &i:vs)
   {
    int word_lenght=i.size();
    if(word_lenght+total_lenght<=m)
    {
        total_lenght+=word_lenght;
        ct++;
    }
    else
    {
        break;
    }
   }

   cout<<ct<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}