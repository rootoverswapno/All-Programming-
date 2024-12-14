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

	int x,y,k;
	cin>>x>>y>>k;
	int x_axis=(x+k-1)/k;
	int y_axis=(y+k-1)/k;
	if(x_axis>y_axis)
	{
		cout<<2*x_axis-1<<endl;
	}
	else
	{
		cout<<2*y_axis<<endl;
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