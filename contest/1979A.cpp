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
  int mx_ele,mn_ele;
  vector<int>vv;
  for(int i=0;i<n-1;++i)
  {
     mx_ele=max(v[i],v[i+1]);
     vv.push_back(mx_ele);
  }
    mn_ele=*min_element(vv.begin(),vv.end());
   cout<<mn_ele-1<<endl;
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
//ROOTOVER SWAPNO.......
}
}
//@SWAPNO_MOY