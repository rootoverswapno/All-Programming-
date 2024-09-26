#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   vector<int>v;
   for(int i=0;i<n;++i)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
   for(int &num:v)
   {
    num++;
    // cout<<num<<" ";
   }
   for(int num:v){
    cout<<num<<" ";
   }
    return 0;
}