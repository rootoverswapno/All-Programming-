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
	
	int num1,num2;
	cin>>num1>>num2;
	int c=min(num1,num2);
	cout<<(num1-c)+(num2-c)<<endl;

}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}