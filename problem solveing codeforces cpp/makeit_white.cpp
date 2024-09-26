#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
          string s;
          cin>>s;
          int c=0,c1=0;
          for(int i=0;i<n;++i)
          {
            if(s[i]=='B'&&c==0)
            {
              c=i+1;
            }
            if(s[i]=='B'&&c!=0)
            {
              c1=i+1;  
            }
         
          }
          cout<<(abs(c1-c))+1<<endl;

    }

    return 0;
}