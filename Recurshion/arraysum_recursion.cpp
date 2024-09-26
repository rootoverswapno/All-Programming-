#include<iostream>
using namespace std;
int sum(int n,int a[])
{
    if(n<0)
    {
        return 0;
    }
   return a[n]+sum(n-1,a);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
          cin>>a[i];
    }
   cout<< sum(2,a)<<endl;
    return 0;
}