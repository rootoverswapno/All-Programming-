#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
        int i;
        for(i=2;i<a;i++)
        {
            if(a%i==0){
            break;
            }
        }
        if(i==a)
        {
           cout<<a<<" is prime number "<<endl;
        }
        else
        {
            cout<<a<<" is not prime number"<<endl;
        }
    
    return 0;
}