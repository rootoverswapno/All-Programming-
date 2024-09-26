#include<bits/stdc++.h>
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define vv vector<int>v(n);
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
int a,b;
cin>>a>>b;
   string s,s1;
   cin>>s>>s1;
   vector<char>v;
   int res=0;
    int i = 0, j = 0;
    while (i < a && j < b) {
        if (s[res] == s1[j]) {
            res++;
        }
        j++;
    }
    cout<<res<<endl;

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
//NAM TO SUNA HI HOGA......
}
}
//@SWAPNO_MOY