#include<iostream>
using namespace std;

int main()
{
    
    long long n,count=0;
    cin>>n;
    while(n!=0)
    {
       if((n%10==7)||(n%10==4))
       {
        count++;
       }  
       n=n/10;
    }
    if((count==7)||(count==4))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}