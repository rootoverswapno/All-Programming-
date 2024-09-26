#include<bits/stdc++.h>
#define int long long 
#define v(n) vector<int>v(n)
#define o cout<<
#define in cin>>
using namespace std;

void solve_de_vai()
{
    int n;
    cin>>n;
    v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    int x,y;
    vector<int>v1;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]>10)
        {
           x=v[i]%10;  
           y=v[i]/10;
           v1.push_back(y);
            v1.push_back(x);
        }
      
        else
        {
            v1.push_back(v[i]);
        }
    }
    //   cout<<x<<" "<<y;
    // for(auto &p:v1)
    // {
    //     cout<<p<<" ";
    // }
    int c=0;
    bool ok=false;
    for(int i=0;i<v1.size();++i)
    {
        if(v1[i]==v1[i+1])
        {
             ok=true;
        }
        
        if(v1[i]<v1[i+1])
        {
            c++;
        }
        else
        {
            ok=false;
        }
       
    }
    // cout<<v1.size()<<" "<<c;
    if(ok==true)
    {
        cout<<"YES"<<endl;
        return;
    } 
    if(c==v1.size())
    {
        cout<<"YES"<<endl;
        return;
    }
    
    else
    {
        cout<<"NO"<<endl;
        return;
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