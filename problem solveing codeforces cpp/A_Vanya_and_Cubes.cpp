#include<iostream>
using namespace std;

int main()
{
    int n,m=1,i=1,c=0;
    cin>>n;
    while(m<=n)
{
    m=((i*i)+i)/2;
    if(m>n)
    {
        break;
    }
    n=n-m;
    c++;i++;
}
cout<<c<<endl;

    return 0;
}