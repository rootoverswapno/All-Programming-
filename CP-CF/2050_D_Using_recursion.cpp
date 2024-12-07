#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}

void process(string &s,int p,int q)
{
    if(q>=s.size())
    {
        return;
    }
    if(s[q]-s[p]>1)
    {
        s[q]--;
        swap(s[p],s[q]);
        if(q>1)
        {
            process(s,--p,--q);
        }
    }
      process(s,++p,++q);

}
void solve(){
   string s;
   cin>>s;
   process(s,0,1);
   cout<<s<<endl;

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