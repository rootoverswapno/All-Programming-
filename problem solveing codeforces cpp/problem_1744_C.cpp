#include<bits/stdc++.h>
#define ll long long
#define lld long long double
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string str;
        cin>>str;
        str+=str;

        in c=0;
        int ans=0;
        for(int i=0;i<2*n;++i)
        {
            if(s[i]=='g')
            {
                break;
            }
            else
            {
                c++;
            }

        }
    }
    
}
int main()
{
    solve();

    return 0;
}