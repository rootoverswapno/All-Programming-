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
	
	int rating;
	cin>>rating;
	if(rating>=1900)
		cout<<"Division "<<1<<endl;
	else if(rating>=1600&&rating<=1899)
		cout<<"Division "<<2<<endl;
    else if(rating>=1400&&rating<=1599)
    	cout<<"Division "<<3<<endl;
    else
    	cout<<"Division "<<4<<endl;
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}