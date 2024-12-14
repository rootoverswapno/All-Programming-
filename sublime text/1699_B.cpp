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
	vector<int>v(n);
	map<int, int> mp;
	for(int i=0;i<n;++i)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	int ct=0;
	bool ok=false;
	for(auto &i:mp)
	{
		if(i.second>=3)
		{
			
          ct=i.first;
          ok=true;
		}
	}
	
	if(ok)
		cout<<ct<<endl;
	else
		cout<<-1<<endl;

	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}