#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b;
    map<string,int>m;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        m[s]++;
        
        if(a.empty())
        {
            a=s;
        }
        else if(b.empty() and s!=a)
        {
            b=s;
        }

    }
    if(m[a]>m[b])
    {
         cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
    
}
int main()
{
    
      solve();
    return 0;
}