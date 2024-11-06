#include<bits/stdc++.h>
using namespace std;
void generate(unordered_map<int,int>&mp,int m)
{
    while (m!=0)
    {
         int rev=m%10;
         mp[rev]++;
         m=m/10;
    }
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
   sort(v.rbegin(),v.rend());
   unordered_map<int,int>mp;
   for(int i=0;i<n;++i)
   {
    if(v[i]>9)
    {
        generate(mp,v[i]);
    }
    else
    {
        mp[v[i]]++;
    }
   }

   vector<pair<int,int>>sorted_mp(mp.begin(),mp.end());
   sort(sorted_mp.begin(),sorted_mp.end(),greater<>());
   string s;
   for(auto &i:sorted_mp)
   { 
       while (i.second--)
       {
          s+=to_string(i.first);
       }
   } 
   cout<<s<<endl;

return 0;
}