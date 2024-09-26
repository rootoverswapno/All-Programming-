#include<bits/stdc++.h>
#define int long long 
using namespace std;

void solve_de()
{
int a,b,c;	
cin >> a >> b >>c;
		int ans = a;
		int r = b%3;
		if(r==0) {
			ans +=b/3;
			if(c%3==0) ans+=c/3;
			else ans+=c/3+1;
			cout << ans << endl;
		}
		else if(c>=3-r){
			b+=(3-r);
			c-=(3-r);
			ans+=b/3;
			if(c%3==0) ans+=c/3;
			else ans+=c/3+1;
			cout << ans << endl;
		}
		else cout << -1 << endl;

}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
}
}