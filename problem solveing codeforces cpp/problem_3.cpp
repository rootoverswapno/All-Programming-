#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
          if(sum>=x)
          {
            sum=sum+i;
        
          }
          if(sum==x)
          {
            cout<<"YES";
          }
        }
    }
    return 0;
}