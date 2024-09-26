#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,c=0;
   cin>>n;
   int I[n];
   for(int i=0;i<n;++i)
   {
    cin>>I[i];
   }
   for(int i=0;i<n;++i)
   {
    if(I[i]!=I[i+1])
    {
        c++;
    }
   }
   cout<<c<<endl;

    return 0;
}