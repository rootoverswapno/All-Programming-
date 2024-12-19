#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int n;
 cin>>n;
 vector<vector<int>>v(n);
 for(int i=0;i<n;++i)
 {
    for(int j=0;j<n;++j)
    {
        cin>>v[i][j];
    }
 }


   int n=v.size();
   int m=v[0].size();
   queue<pair<pair<int,int>,int>q;
   vector<vector<int>>vis(n);
   for(int i=0;i<n;++i)
   {
    for(int j=0;j<m;++j)
    {
        if(v[i][j]==2)
        {
            q.push({{i,j},0});
            vis[i][j]=2;
        }
        else
        {
            vis[i][j]=0;
        }
    }
   }
   int tm=0;
  int dr[]={0,-1,0,+1};
  int dc[]={-1,0,+1,0};
  while(!q.empty())
  {
    tm=max(t,tm);
    int r=q.front().first.first;
    int c=q.front().first.second;
    int t=q.front().second;
    q.pop();
    for(int i=0;i<4;++i)
    {
        
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nr<nn&&nc>=0&&nc<m&&
            vis[nr][nc]!=2&&v[nr][nc]==1)
            {
                 q.push({{nr,nc},t+1});
                 vis[nr][nc]=2;
            }
        
    }
  }
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<m;++j)
    {
        if(vis[i][j]!=2&&vis[i][j]==1)
        {
            return -1;
        }
    }
  }
  return tm;
return 0;
}