#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){

ll n;
cin>>n;
vector<ll>v(n);
for(ll &num:v)cin>>num;
ll odd_sum=0;
ll even_sum=0;
for(ll i=0;i<n;++i)
{
    if(i%2==0)
    {
       even_sum+=v[i];
    }
     else
     {
        odd_sum+=v[i];
     }
     
}
ll odd_ct=n/2;
ll even_ct=(n+1)/2;

if(even_sum%even_ct==0&&odd_sum%odd_ct==0&&(odd_sum/odd_ct)==(even_sum/even_ct))
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}