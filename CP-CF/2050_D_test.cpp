#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve(){
    string s;
    cin>>s;
    int p=0,q=1;
    int n=s.size();
    while (q<n)
    {
        if(s[q]-s[p]>1)
        {
            s[q]--;
            swap(s[p],s[q]);
            if(p>1)
            {
                p--;
                q--;
            }
        }
        else
        {
            p++;
            q++;
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
solve();
}
return 0;
}