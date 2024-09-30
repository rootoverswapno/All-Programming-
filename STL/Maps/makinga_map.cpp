#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>mp;
  while(true)
  {
    
      string key;
      cin>>key;
      if(key=="exit")
      {
        break;
      }
      int value;
      cin>>value;
      mp[key]=value;
  }
   for(auto &i:mp)
     {
         cout<<i.first<<" "<<i.second<<endl;
     }




return 0;
}