#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v={2,2,2,3,4,5};
   map<int,int>mp;
   for(auto &i:v)
   {
    mp[i]++;
   }
//    for(auto &i:mp)
//    {
//     cout<<i.first<<"  "<<i.second<<endl;
//    }
int mx=INT_MIN;
int current=INT_MIN;
int it;
for(auto &en:mp)
{
    
    mx=max(en.second,mx);
    if(current<en.second)
    {
        current=en.second;
        it=en.first;
    }
}

cout<<mx<<"   "<<it<<endl;

return 0;
}