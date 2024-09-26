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
int a,b;
cin>>a>>b;
int ct=0;
while(a>0||b>0)
{
    if(b>=2)
    {
        a-=7;
        b-=2;
        ct++;
    }
    else if(b==1)
    {
        a-=11;
        b-=1;
        ct++;
    }
    else
    {
        a-=15;
        ct++;
    }
}
cout<<ct<<endl;

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