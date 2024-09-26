#include<bits/stdc++.h>
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define vv vector<int>v(n);
#define int long long 
using namespace std;

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
// Mathematical functions
int gcd(int a, int b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
int lcm(int a, int b){return (a/gcd(a,b)*b);}
//Code by Swapnomoy Biswas
//Language C++
//Practice->Success
void solve_de()
{
//rootover swapno.......
//Solve Here
  int x;
  cin>>x;
  int xx;
  int ans=0;
   int y=0;
  for(int i=1;i<x;++i)
  {
    xx=gcd(x,i)+i;
    if(xx>ans)
    {
        ans=xx;
        y=i;
    }
  }
  cout<<y<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
//SWAPNO KING OF THE WORLD..
//NAM TO SUNA HI ......
}
}
//@SWAPNO_MOY