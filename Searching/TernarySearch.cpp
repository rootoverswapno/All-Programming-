#include<bits/stdc++.h>
using namespace std;
int ternarysearch(vector<int>&v,int lo,int hi,int target)
{
    while(lo<=hi)
    {
          int mid1=lo+(hi-lo)/3;
          int mid2=hi-(hi-lo)/3;
          if(v[mid1]==target)return mid1;
          if(v[mid2]==target)return mid2;
          if(v[mid1]>target)hi=mid1-1;
          else if(v[mid2]<target)lo=mid2+1;
    }
    return -1;
}
int main()
{
     vector<int>v={10,20,30,40,50,60,70,80};
     int target=70;
     int index=ternarysearch(v,0,v.size()-1,target);  
      cout<<"value is "<<v[index]<<"  At index "<<index<<endl;     



return 0;
}