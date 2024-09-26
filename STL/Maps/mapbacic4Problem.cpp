#include<bits/stdc++.h>
using namespace std;

int main()
{
    
      int n;
      cin>>n;
      map<string,int>m;
      for(int i=0;i<n;++i)
      {
        string x;
        cin>>x;
        m[x]++;
      }
      for(auto p:m)
      {
        cout<<p.first<<" "<<p.second<<endl;
      }

    return 0;
}