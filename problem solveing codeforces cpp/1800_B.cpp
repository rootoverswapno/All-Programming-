#include<bits/stdc++.h>
#define swapno king of the world  
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    map<char,int>tmp;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]>=97)
        {
         mp[s[i]]++;
        }
        else
        {
            tmp[s[i]+32]++;
        }
      
    }
    int ans=0;
    for(int i='a';i<='z';++i)
    {
         ans+=min(mp[i],tmp[i]);
         int diff=abs(mp[i]-tmp[i]);
         int m=min(diff/2,k);
         k-=m;
         ans+=m;

         
    }
    cout<<ans<<endl;
//    for(auto &i:mp)
//    {
//     cout<<i.first<<" "<<i.second<<endl;
//    }
//    for(auto &i:tmp)
//    {
//     cout<<i.first<<" "<<i.second<<endl;
//    }


}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
}
}