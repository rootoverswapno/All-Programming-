#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
if(a>=b)
{
    cout<<a<<endl;
}
else
{
    int c=b-a;
    c=c*2;
    b-=c;
    if(b!=0&&b>0)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}



}
return 0;
}