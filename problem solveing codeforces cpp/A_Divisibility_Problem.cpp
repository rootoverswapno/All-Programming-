#include<iostream>
using namespace std;

int main()
{
   long long int t,a,b;
    cin>>t;
    while(t--)
    {
       cin>>a>>b;
       if(a%b==0)
       {
        cout<<"0"<<endl;
       }
       else
       {
        int c=a%b;
        cout<<b-c<<endl;
       }

    }
    return 0;
}