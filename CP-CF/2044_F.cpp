#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){

int k,l1,r1,l2,r2;
cin>>k>>l1>>r1>>l2>>r2;
 ll p=1;
 ll res=0;
 while(p<=1e9)
 {
    res+=max(min(r2/p,r1)-max((l2+p-1)/p,l1)+1,0LL);
    p*=k;
 }
 cout<<res<<endl;

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