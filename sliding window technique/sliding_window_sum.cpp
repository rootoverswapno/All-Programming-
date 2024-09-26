#include <bits/stdc++.h>
using namespace std;
int windowsum(vector<int>&v,int x)
 {
     int a=0;
     for(int i=0;i<x;++i)
     {
        a=a+v[i];
     }
       
    cout<<a<<endl;
     int b=a;
     for(int i=x;i<v.size();++i)
     {
        a=a+v[i]-v[i-x];
    cout<<a<<endl;
         
     }
    
  
 }
int main()
{

    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int windowsize=3;
    int result =windowsum(v,windowsize);
    
    return 0;
}