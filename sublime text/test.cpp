#include<bits/stdc++.h>

using namespace std;

void code()
{
	#ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
	#endif 
}
void solve()
{
	int n;
	cin>>n;

	int x=0;
	int m=1;
	bool s=true;
	while(true)
	{
		if(s)
		{
			x-=m;
		}
		else
		{
			x+=m;
		}
		if(abs(x)>n)
		{
			cout<<(s?"Sakurako" : "Kosuke")<<endl;
		}
		s=!s;
		m+=2;
	}
	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}