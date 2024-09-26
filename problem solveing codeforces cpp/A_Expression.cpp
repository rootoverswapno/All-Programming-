#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int a1=a+b+c;
    int a2=a*b*c;
    int a3=a+b*c;
    int a4=a*b+c;
    int a5=(a*b)+c;
    int a6=(a+b)*c;
    int a7=a*(b+c);
    int a8=a+(b*c);
    int a9=max(a1,max(a2,max(a3,max(a4,max(a5,max(a6,max(a7,a8)))))));
    cout<<a9<<endl;
    return 0;
}