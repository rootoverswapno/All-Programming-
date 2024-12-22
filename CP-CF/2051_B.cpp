#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
int n,a,b,c;
  cin>>n>>a>>b>>c;
 ll sum=0;
 ll ct=0;

sum=a+b+c;
ll cy=n/sum;
 ll  sum2=sum*cy;
  ct=cy*3;

 if(sum2<n)
 {
    sum2+=a;
    ct++;
     if(sum2>=n)
    {
        cout<<ct<<endl;
        return;
    }
    sum2+=b;
    ct++;
    if(sum2>=n)
    {
        cout<<ct<<endl;
        return;
    }
     sum2+=c;
    ct++;
       if(sum2>=n)
    {
        cout<<ct<<endl;
        return;
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
solve_by_Swapno();
}
return 0;
}