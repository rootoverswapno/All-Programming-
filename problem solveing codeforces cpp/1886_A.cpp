#include<bits/stdc++.h>
#define pb push_back
#define swapno king of the world  
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
int n;
cin>>n;
 if(n<7||n==9)
{
    cout<<"NO"<<endl;
    return;
}
else
{
    cout<<"YES"<<endl;
    int c=n-3;
    if(c%3==0)
    {
        cout<<1<<" "<<4<<" "<<n-5<<endl;
        return;
    }
    else
    {
        cout<<1<<" "<<2<<" "<<n-3<<endl;
        return;
    }
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
//NAM TO SUNA HI HOGA......
}
}