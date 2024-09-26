#include<iostream>
using namespace std;

int main()
{
    int n,k,j;
    cin>>n>>k;
    for (int  i = 1; i<=k; i++)
    {
        j=n%10;
        if(j==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n;
    
    return 0;
}