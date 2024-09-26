#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
       cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i].first;
            cin>>v[i+1].second;
        }
       sort(v.begin(),v.end());
       int p;
       p=(v[0].first==v[1].first)?v.back().second:v[0].second;
       cout<<p;
      
    }
    return 0;
}