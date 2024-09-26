#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int s=(4*n-2);
    if(s==k)
    {
        cout<<ceil((s/2.0)+1)<<endl;
    }
    else
    {
        cout<<ceil(s/2.0)<<endl;
    }
}
int main()
{
    
int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}