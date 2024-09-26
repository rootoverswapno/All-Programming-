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
int n,k,pb,ps;
 cin>>n>>k>>pb>>ps;
 vector<int>v1(n);
 vector<int>v2(n);
 for(auto &i:v1)
 {
    cin>>i;
 }
  for(auto &i:v2)
 {
    cin>>i;
 }
 int sas=0,bod=0;

 for(int i=0;i<k;++i)
 {
    bod+=v2[pb];
    sas+=v2[ps];

    if(bod==v1[pb])
    {
        pb--;
    }
    if(sas==v1[ps])
    {
        ps--;
    }

 }
 if(sas>bod)
 {
    cout<<"Sasha"<<endl;
    return;
 }
 if(sas<bod)
{
    cout<<"Bodya"<<endl;
    return;
}
 if(sas==bod)
{
    cout<<"Draw"<<endl;
    return;
}

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