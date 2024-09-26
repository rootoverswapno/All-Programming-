#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        cout<<a<<" ";
    }
    else
    {
        cout<<b<<" ";
    }
    int c=abs(a-b);
    cout<<" "<<c/2;
    return 0;
}