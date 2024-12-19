#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj(vector<vector<int>>&v)
{
    int size=v.size();
    vector<vector<int>>list(size);
    for(int i=0;i<size;++i)
    {
        for(int j=0;j<size;++j)
        {
            if(v[i][j]!=0)
            {
                    list.push_back(j);
            }
        }
    }
    return list;
}
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
 vector<vector<int>>adjlist=adj(v);



 
    
    for(auto &i:adjlist)
    {
        // cout<<i<<" : ";
        for(auto &j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }



return 0;
}