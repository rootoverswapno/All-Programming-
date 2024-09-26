#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    vector<int>v;
    for(int i=0;i<b;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
   int m=10000000;
   for(int i=a;i<=b;++i)
   {
      m=min(m,abs(v[i-1]-v[i-a]));
   }
   cout<<m<<endl;

    return 0;
}