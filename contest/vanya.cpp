#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve_de_vai()
{
     
    vector<int>v(3);
    for(auto &i:v)
    {
        int sum=0;
        cin>>i;
        while(i!=0)
        {
            sum=sum+i%10;
            i/=10;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
    
     
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