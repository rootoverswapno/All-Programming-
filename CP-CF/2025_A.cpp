#include<bits/stdc++.h>
using namespace std;
void solve()
{

    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    int ct=0;
    for(int i=1;i<=min(n1,n2);++i)
    {
        if(s1.substr(0,i)==s2.substr(0,i))
        {
            ct=i;
        }
    }
        cout<<n1+n2-max(ct,1)+1<<endl;
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