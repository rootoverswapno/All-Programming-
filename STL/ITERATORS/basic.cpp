#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;++i)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl<<endl;
    vector<int>::iterator it=v.begin();
    for(it=v.begin()+1;it!=v.end()-1;++it)
    {
        cout<<(*it)<<endl;
    }
    
    return 0;
}