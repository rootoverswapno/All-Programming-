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

	long long x,m;

	cin>>x>>m;
	long long ct=0;
	for(long long y=1;y<=min((2*x),m);++y)
	{

		if(x!=y)
		{
			long long xx=x^y;

			if(x%xx==0||y%xx==0)
			{
				ct++;
			}
		}
	}
	cout<<ct<<endl;
	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}