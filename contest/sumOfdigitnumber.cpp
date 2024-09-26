#include<bits/stdc++.h>
using namespace std;
int sum(int res)
{
    if(res==1)
    {
        return 1;
    }
    else
    {
        return res+sum(res-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int ct=n/9;
    int res=n%9;
    cout<<(45*ct)+sum(res)<<endl;
    return 0;
}