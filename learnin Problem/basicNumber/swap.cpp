#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=15;
    int temp=a;
    a=b;
    b=temp;

    cout<<a<<"  "<<b<<endl;
    a=10,b=15;

    a=a+b;
    b=a-b;
    a=a-b;
    
     cout<<a<<"  "<<b<<endl;
     a=10,b=15;
     a=a^b;
     b=a^b;
     a=a^b;

      cout<<a<<"  "<<b<<endl;




return 0;
}