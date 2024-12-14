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
	for(auto &i:v)
	{
		cin>>i;
	}
	int even_parity=v[0]%2;
	bool even_parity_check=true;
	for(int i=0;i<n;i+=2)
	{
		if(v[i]%2!=even_parity)
		{
            even_parity_check=false;
            break;
		}
	}
	int odd_parity=v[1]%2;
	bool odd_parity_check=true;

    for(int i=1;i<n;i+=2)
	{
		if(v[i]%2!=odd_parity)
		{
            odd_parity_check=false;
            break;
		}
	}
	if(odd_parity_check==even_parity_check)
	cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	



	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}