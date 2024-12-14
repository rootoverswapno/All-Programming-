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
	string s;
	cin>>s;
	int b=0;
	int r=0;
	bool ok=false;
	// if(n==1)
	// {
	// 	cout<<"NO"<<endl;
	// 	return;
	// }
	for(int i=0;i<n;++i)
	{
		if(s[i]=='B')b++;
		if(s[i]=='R')r++;
		if(s[i]=='W'||i+1==n)
		{
			if((b>0&&r==0)||(r>0&&b==0))
			{
                 ok=true;
                 break;
			}
			b=0;
	        r=0;

		}
		// b=0;
	    // r=0;
	    //after 2 days of strugle to solve this

		
	}
	if(ok)
		cout<<"NO"<<endl;
	else 
	   cout<<"YES"<<endl;



	
}
int main()
{
	code();
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}