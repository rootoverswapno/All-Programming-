#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
         int c=0;
         string s;
         cin>>s;
        for(int i=0;i<b;++i)
        {
            if(s[i]=='W')
            {
                c++;
            }

        }
        int ans=c;
        for(int i=b;i<a;++i)
        {
            if(s[i]=='W')
            {
                c++;
            }
            if(s[i-b]=='W')
            {
                c--;
            }
          ans=min(ans,c);
        }
        cout<<ans<<endl;

    }
}
int main()
{
    
  solve();  
    return 0;
}