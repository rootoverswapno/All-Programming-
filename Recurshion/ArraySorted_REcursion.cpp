#include<bits/stdc++.h>
using namespace std;
bool IsSortedArray(vector<int>&v,int n)
{
      if(n==1)
      {
        return true;
      }
      if(v[n-1]<v[n-2])
      {
        return false;
      }
      return IsSortedArray(v,n-1);
}
int main()
{
     vector<int>v={5,2,3,4,5};

  if(IsSortedArray(v,v.size()))
  {
    cout<<"Sorted";
  }
  else
  {
    cout<<"Unsorted";
  }


    return 0;
}