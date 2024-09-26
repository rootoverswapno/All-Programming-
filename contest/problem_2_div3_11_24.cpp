#include<bits/stdc++.h>
#define int long long 
#define v(n) vector<int>v(n)
#define o cout<<
#define in cin>>
using namespace std;

void solve_de_vai()
{
    int n;
    in n;
    v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    for(int i=0;i<n-2;++i)
    {
        if(v[i]==0)
        {
            continue;
        }
        else if(v[i]<0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            v[i+1]-=2*v[i];
            v[i+2]-=v[i];
            v[i]=0;
        }
    }
    if(v[n-2]==0&&v[n-1]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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