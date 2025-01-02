#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
   string s;
   cin>>s;
   int sum=0;
   for(auto &i:s)
   {
    sum+=(i-'0');
   }
   if(sum%3==0)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
  


}
return 0;
}