#include<iostream>
using namespace std;

int main()
{
    int n,k,c=0,p=0;
    cin>>n>>k;
    int d=240-k;
    for(int i=1;i<=n;++i)
    {
       c+=5*i;
       if(c<=d)
       {
        p++;
       }
    }
    cout<<p<<endl;

    
    return 0;
}