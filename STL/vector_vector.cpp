#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int s;
    cin>>s;
    vector<vector<int>>v;
    for(int i=0;i<s;++i)
    {
        int n;
        cin>>n;
        vector<int>temp; 
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<s;++i)

    {
        printvec(v[i]);
    }
    cout<<endl;
    cout<<v[0][0];
    
    return 0;
}