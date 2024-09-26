#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
  vector<pair<int,int>>v;
  int arr[]={10,20,5,40};
  int arr1[]={30,60,20,50};
  int n=sizeof(arr)/sizeof(arr[0]);
   int arr[n],arr1[n];
  for(int i=0;i<n;++i)
  {
    v.push_back(make_pair(arr[i],arr1[i]));
  }  
  cout<<"The vector before sort operation is:"<<endl;
  for(int i=0;i<n;++i)
  {
    cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
  }
  sort(v.begin(),v.end());
  cout<<"The vector after sort operation:"<<endl;
  for(int i=0;i<n;++i)
  {
    cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
  }

   
    return 0;
}