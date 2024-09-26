#include<bits/stdc++.h>
using namespace std;
bool SortedArray(vector<int>&v,int n)
{
      if(n==1)
      {
        return true;
      }
      if(v[n-1]<v[n-2])
      {
        return false;
      }
      return SortedArray(v,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    if(SortedArray(v,n))
    {
       cout<<"Sorted Array";
    }
    else
    {
        cout<<"Unsorted Array";
    }
    return 0;
}