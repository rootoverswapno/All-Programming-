#include<bits/stdc++.h>
using namespace std;
#define ll long long
int vis[8][8];
int level[8][8];
vector<pair<int,int>>movements={
    {-1,2},{1,2},
    {-1,-2},{1,-2},
    {2,-1},{2,1},
    {-2,-1},{-2,1}
};
bool isvalid(int x,int y)
{
    return x>=0&&y>=0&&x<8&&y<8;
}
int getX(string s)
{
    return s[0]-'a';
}
int getY(string s)
{
    return s[1]-'1';
}
int bfs(string source ,string dest)
{
    int sourceX=getX(source);
    int sourceY=getY(source);
    int destX=getX(dest);
    int destY=getY(dest);
    queue<pair<int,int>>q;
    q.push({sourceX,sourceY});
    vis[sourceX][sourceY]=1;
    while(!q.empty())
    {
        pair<int,int>v=q.front();
        int x=v.first;
        int y=v.second;
        q.pop();
        for(auto move:movements)
        {
            int childx=move.first+x;
            int childy=move.second+y;
            if(!isvalid(childx,childy))continue;
            if(!vis[childx][childy])
            {
                q.push({childx,childy});
                level[childx][childy]=level[x][y]+1;
                vis[childx][childy]=1;

            }

        }
        

    }
    return level[destX][destY];
}
void reset()
{
    for(int i=0;i<8;++i)
    {
        for(int j=0;j<8;++j)
        {
            vis[i][j]=0;
            level[i][j]=0;
        }
    }
}
void solve_by_Swapno(){
reset();
string s1,s2;
cin>>s1>>s2;
cout<<bfs(s1,s2)<<endl;

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