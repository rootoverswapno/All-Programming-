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
   int first=INT_MIN;
   int second=INT_MIN;

   if(v.size()<2)
   {
    cout<<"NO second largest fund"<<endl;
    return 0;
   }
   for(int num:v)
   {
    if(num>first)
    {
        second=first;
        first=num;
    }
    else if(num<first&&num>second)
    {
        second=num;
    }
   }

   cout<<second<<"  "<<first<<endl;



return 0;
}