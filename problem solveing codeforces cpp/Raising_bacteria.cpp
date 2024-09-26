#include<iostream>
using namespace std;

int main()
{
    int n,p=0;
    cin>>n;
    while (n>1)
    {
        if(n%2==1)
        {
           p++;
        }
        n=n/2;
    }
    cout<<p+1<<endl;
    
    return 0;
}