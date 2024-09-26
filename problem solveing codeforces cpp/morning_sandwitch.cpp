#include<iostream>
using namespace std;
int main()
{
int n;
int a,b,c,d;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a>>b>>c;
d=c+b;
if(d<a)
{
    cout<<d+(d+1)<<endl;
}
else
{
    cout<<a+(a-1)<<endl;
}
}


}