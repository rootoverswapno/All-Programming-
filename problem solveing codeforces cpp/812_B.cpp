#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve_de_vai()
{
     int n;
     cin>>n;
     vector<int>v(n);
     int mx=1;
      int index_mx=0;
     for(int i=0;i<n;++i)
     {
        cin>>v[i];
        if(v[i]>mx)
        {
            mx=v[i];
            index_mx=i;
        }
     } 
     int ans=0;
     for(int i=index_mx+1;i<n;++i)
     {
        if(v[i]>v[i-1])
        {
            ans=1;
            break;
        }

     }
     for(int i=index_mx-1;i>=0;--i)
     {
        if(v[i]>v[i+1])
        {
            ans =1;
            break;
        }
     }
     if(ans==1)
     {
        cout<<"NO"<<endl;
     }
     else
     {
        cout<<"YES"<<endl;
     }



}
int32_t main()
{ 
    int t;
    cin>>t;
while(t--)
{ 
   solve_de_vai();
}
}