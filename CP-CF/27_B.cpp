#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve(){
   
   int n;
   int x,y;
   cin>>n;
   vector<int>v(n+1,0),win(n+1,0);
    int tt = n * (n - 1) / 2 - 1;
   for(int i=1;i<=tt;++i)
   {
    cin>>x>>y;
    v[x]++;
    v[y]++;
    win[x]++;
   }
   int p1=-1;
   int p2=-1;
   for(int i=1;i<=n;++i)
   {
    if(v[i]!=n-1)
    {
        if(p1==-1)
        {
            p1=i;
        }
        else
        {
            p2=i;
            break;
        }
    }
   }
   
   if(win[p2]>win[p1])
   {
      cout<<p2<<" "<<p1<<endl;
   }
   else{
    cout<<p1<<" "<<p2<<endl;
   }

   
}
int main(){

solve();

return 0;
}