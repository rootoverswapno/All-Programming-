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

	int h,m;char c;
  cin>>h>>c>>m;
  string am=(h<12?"AM":"PM");
  h=(h%12?h%12:12);
   
   cout<<(h<10?"0":"")<<h<<c<<(m<10?"0":"")<<m<<" "<<am<<endl;
	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}