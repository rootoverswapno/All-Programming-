#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s="";
   while(n!=0)
   {
      if(n%2==0) s+='0';
      else s+='1';
      n/=2;
   }
   reverse(s.begin(),s.end());
   cout<<s<<endl;



return 0;
}