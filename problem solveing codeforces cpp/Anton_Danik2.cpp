#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0;
    int n;
     cin>>n;
    char ch;
   
        for(int i=0;i<n;++i)
        {
           cin>>ch;
           if(ch=='A')
           {
            a++;
           }
           if(ch=='D')
           {
            b++;
           }

        }
        if(a>b)
        {
            cout<<"Anton"<<endl;
        }
        else if(b>a)

        {
            cout<<"Danik"<<endl;
        }
        else{
        cout<<"Friendship"<<endl;
        }
    
    return 0;
}