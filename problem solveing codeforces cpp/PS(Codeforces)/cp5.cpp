#include<bits/stdc++.h>
#define int long long 
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define va vector<int>v(n);
#define vb vector<int>v1(n);
#define f(i,n) for(auto &i:v){cin>>i;}
long long  N=1e9+7 ;
using namespace std;

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
// Mathematical functions
int gcd(int a, int b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
int lcm(int a, int b){return (a/gcd(a,b)*b);}//__lcm
int factorial(int x){if(x==0){return 1;} else {return (x*factorial(x-1)); }}//__facttorial
//Code by Swapnomoy Biswas
void solve_de()
{
//...Solve Here...
 int n;
 cin>>n;
 va
 f(i,n)
 int s1=0;
 int s2=0;
 int nn=v.size();
 vector<int>vt1(nn+1,0),vt2(nn+1,0);
 for(int i=0;i<n;++i)
 {
    vt1[i+1]=vt1[i];
    vt2[i+1]=vt2[i];
    if(i%2==0)
    {
        vt1[i+1]+=v[i];
    }
    if(i%2!=0)
    {
         vt2[i+1]+=v[i];
    }
 }
 map<int,int>mp;
 for(int i=0;i<=v.size();i++)
 {
   int res=vt1[i]-vt2[i];
   if(mp.find(res)!=mp.end())
   {
    if(i-mp[res]>=2){
        cout<<"YES"<<endl;
        return;
    }
   }
   mp[res] = i;
 }
 cout<<"NO"<<endl;
 return;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve_de();
    }
}
