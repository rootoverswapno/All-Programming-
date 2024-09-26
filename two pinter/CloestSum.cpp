#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      vector<int>v(n);
      for(auto &i:v)
      {
        cin>>i;
      }
      int x;
      cin>>x;
      int lo=0,hi=v.size()-1;
      int lo_l,hi_r;
      int diff=INT_MAX;
      while(lo<hi)
      {
        int sum=v[lo]+v[hi];
        int diff2=abs(sum-x);
        if(diff2<diff)
        {
            lo_l=lo;
            hi_r=hi;
            diff=abs(sum-x);
        }
        if(sum<x)

        {
            lo++;
        }
        else
        {
            hi--;
        }
          
      }
      cout<<v[lo_l]<<" "<<v[hi_r]<<" "<<endl;





    return 0;
}