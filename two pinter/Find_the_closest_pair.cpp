#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(auto &i:v1)
    {
        cin>>i;
    }
      for(auto &i:v2)
    {
        cin>>i;
    }
    int x;
    cin>>x; 
     int lo=0;
     int hi=m-1;
     int lo_l,hi_r;
     int diff=INT_MAX;
     while(lo<n&&hi>=0)
     {
        int curr=v1[lo]+v2[hi];
       
        if((abs(curr-x))<diff)
        {
            lo_l=lo;
            hi_r=hi;
           diff=abs(curr-x);
        }
        if(curr<x)
        {
            lo++;
        }
        else
        {
            hi--;
        }

     }
     cout<<v1[lo_l]<<" + "<<v2[hi_r]<<" "<<endl;



    return 0;
}