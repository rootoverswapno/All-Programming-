#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int &i:v)
   {
    cin>>i;
   }
   bool ok=true;
   for(int i=0;i<n;++i)
   {
       if((abs(v[i+1]-v[i]))==5||7)
       {
        ok=true;
       }
       else
       {
        ok=false;
        break;
       }
   }
   if(ok)
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