#include<bits/stdc++.h>
#define int long long 
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define va vector<int>v(n);
#define vb vector<int>v1(n);
#define f(i,n) for(auto &i:v){cin>>i;}
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
int a,b,c,d;
cin>>a>>b>>c>>d;
    int min1=min(a,b);
    int min2=min(c,d);
    int mx1=max(a,b);
    int mx2=max(c,d);
    if((min1>min2 and mx1<mx2) or (min1<min2 and mx1>mx2) or mx1<min2 or mx2<min1)
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