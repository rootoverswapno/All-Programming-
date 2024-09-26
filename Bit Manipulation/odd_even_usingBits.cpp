#include<bits/stdc++.h>
using namespace std;
void printBinary(int number)
{
    for(int i=10;i>=0;--i)
    {
        cout<<((number>>i)&1);
    }
    cout<<endl;

}

int main()
{
    
for(int i=1;i<=10;++i)
{
    if((i&1)!=0)
    {
        cout<<"ODD NUMBER  :";
    }
    else
    {
        cout<<"EVEN NUMBER  :";
    }
    // cout<<endl;
    printBinary(i);
}


    return 0;
}