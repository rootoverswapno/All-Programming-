#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
 int n,k;
 cin>>n>>k;
 vector<int>v(n,0);
 int kk=1;
 for(int i=k-1;i<n;i+=k)
 {
    v[i]=kk++;
 }
 for(int i=0;i<n;++i)
 {
    if(v[i]==0)
    {
        v[i]=kk++;
    }
 }
 for(auto &i:v)
 {
    cout<<i<<" ";
 }
 cout<<endl;

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