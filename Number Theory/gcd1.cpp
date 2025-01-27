#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
    if(n2==0)return n1;
    return gcd(n2,n1%n2);
}
int main()
{
   int num1,num2;
   cin>>num1>>num2;
   int res=gcd(num1,num2);
   cout<<res<<endl;
   
    


return 0;
}