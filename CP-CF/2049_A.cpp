#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
int mex(vector<int>&v)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();++i)
    {
        if(v[i]!=i)
        {
            return i; 
        }
    }
    return v.size();
}
void solve_by_Swapno(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i:v)
  {
    cin>>i;
  }
   if(all_of(v.begin(),v.end(),[](int x){return x==0;}))
   {
    cout<<0<<endl;
    return;
   }
   if(mex(v)==0)
   {
    cout<<0<<endl;
   }
   else
   {
    cout<<2<<endl;
   }

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