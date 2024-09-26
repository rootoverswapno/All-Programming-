#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      map<int,int>m;
      int r1=0,r2=0,sum=0;
      for(int i=0;i<n;++i)
      {
        int x;
        cin>>x;
        m[x]++;
        if(x%3==1)
        {
            r1=x;
        }
        if(x%3==2)
        {
            r2=x;
        }
        sum+=abs(x);
        
      }
      int p=sum%3;
      if(p==0)
      {
        cout<<0<<endl;
      }
      else if((sum-r1)%3==0||(sum-r2)%3==0)
      {
        cout<<1<<endl;
      }
      else if(p==1)
      {
        cout<<2<<endl;
      }
      else if(p==2)
      {
        cout<<1<<endl;
      }
      

    }
    return 0;
}