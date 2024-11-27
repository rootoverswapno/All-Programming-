#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<vector<int>> adjMatrix = 
        {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
        };
      
        int n=adjMatrix.size();
        vector<vector<int>> graph(n + 1);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                  if(adjMatrix[i][j]==1)
                  {
                    graph[i+1].push_back(j+1);
                  }
            }
        }

        for(int i=1;i<graph.size();++i)
        {
            for(int chield:graph[i])
            {
                cout<<chield<<" ";
            }
            cout<<endl;
        }



return 0;
}