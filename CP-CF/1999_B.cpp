#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
 
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 vector<pair<int,int>>suneet={{a,b},{b,a}};
 vector<pair<int,int>>slavic={{c,d},{d,c}};
int s=0;
 
 for(auto &i:suneet)
 {
   
    for(auto &j:slavic)
    {
         int sunet=0;
         int sla=0;
        if(i.first>j.first)sunet++;
        else if(i.first<j.first)sla++;

        if(i.second>j.second)sunet++;
        else if(i.second<j.second)sla++;

        if(sunet>sla)   s++;  
        
    }
 }

 cout<<s<<endl;

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