#include<bits/stdc++.h>
using namespace std;
int SumOfPower(int n,int p)
{
    if(p==0)
    return 1;
    return n*SumOfPower(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<SumOfPower(n,p)<<endl;


    return 0;
}