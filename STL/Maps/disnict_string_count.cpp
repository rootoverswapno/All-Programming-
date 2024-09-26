#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
      
    return 0;
}