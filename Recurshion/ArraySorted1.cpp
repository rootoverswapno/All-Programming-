#include<bits/stdc++.h>
using namespace std;
bool ArraySorted(vector<int>&v,int n)
{
  if(n==1)
  {
    return true;
  }
  if(v[n-2]>v[n-1])
  {
     return false;
  }
  return ArraySorted(v,n-1);
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
   if(ArraySorted(v,v.size()))
   {
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }



    return 0;
}