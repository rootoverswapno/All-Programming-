#include<bits/stdc++.h>
using namespace std;
long long powgenerate(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
   int half= powgenerate(x,n/2);
    if(n%2==0)
    {
        return half*half; 
    }
    else{
        return x*half*half;
    }
}
int main()
{

int n,x;
cin>>x>>n;
long long i=powgenerate(x,n);
cout<<i<<endl;

return 0;
}