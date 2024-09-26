#include<bits/stdc++.h>
using namespace std;
int FactorialNumber(int n)
{
  if(n==0)
  return 1;
  return n*FactorialNumber(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<FactorialNumber(n)<<endl;


    return 0;
}