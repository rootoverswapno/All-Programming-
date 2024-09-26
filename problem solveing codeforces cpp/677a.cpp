#include<iostream>
using namespace std;

int main()
{
int n,p,c=0,c1=0,c2;
cin>>n>>p;
int a[n];
for(int i=0;i<n;++i)
{
   cin>>a[i];
   if(a[i]>p)
   {
    c=c+2;
   }
   else if(a[i]<=p)
   {
    c1++;
   }
}
c2=c+c1;
cout<<c2;
    return 0;
}