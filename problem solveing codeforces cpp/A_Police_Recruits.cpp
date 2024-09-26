#include<iostream>
using namespace std;

int main()
{
    int crime=0,police=0;
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       if(n==-1)
       {
        if(police>0)
        {
            police--;
        }
        else
        {
           crime++;
        }
       }
       else
       {
        police+=n;
       }
    }
    cout<<crime<<endl;
    return 0;
}