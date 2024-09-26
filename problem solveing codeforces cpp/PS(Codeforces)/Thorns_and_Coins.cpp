#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        int c=0;
          cin>>str; 
        for(int i=0;i<n;++i)
        {
            if(str[i]=='*'&&str[i+1]=='*')
          {
             break;
          }
          
          else if(str[i]=='@')
          {
             c++;
          }
        }
        cout<<c<<endl;
    }
    
}
int main()
{
    
 solve();
    return 0;
}