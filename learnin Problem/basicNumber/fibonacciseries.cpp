#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=0,num2=1,num3;
    cin>>num3;
    int ct=0;
    for(int i=0;i<=num3;++i)
    {
        cout<<num1<<" ";
        int sum=num1+num2;
        num1=num2;
        num2=sum;
        ct++;
        if(ct==4)
        {
            break;
        }
    }
    cout<<endl;


return 0;
}