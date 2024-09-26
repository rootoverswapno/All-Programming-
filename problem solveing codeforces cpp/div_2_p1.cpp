#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve_de_vai()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int flag=0;
   for(int i=0;i<(s.size())/2;++i)
   {
    if(s[i]==s[(s.size())-1-i])
    {
        continue;
    }
    if(s[i]>s[s.size()-1-i])
    {
        flag =1;
    }
    else
    {
        break;
    }
   }
   string rev=s;
   reverse(rev.begin(),rev.end());
   if(flag==0)
   {
    cout<<s<<endl;
   }
   else
   {
    cout<<rev<<s<<endl;
   }


}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{ 

   solve_de_vai();
}
}