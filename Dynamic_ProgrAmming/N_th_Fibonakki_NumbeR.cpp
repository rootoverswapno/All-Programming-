#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int dp[N];

//solve top down approach
int fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];

    // -1 in this process called memoise
    //o(2^n) to convert o(n) complexity in this code 

    return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
    memset(dp,-1,sizeof(dp));
 int n;
 cin>>n;
 cout<<fib(n)<<endl;



return 0;
}