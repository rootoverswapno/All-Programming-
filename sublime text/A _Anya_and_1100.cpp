#include<bits/stdc++.h>
using namespace std;
// const srring str=1100;

void code()
{
	#ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
	#endif 
}
void solve()
{

	string stt="1100";
   
   string s;
   cin>>s;
   int q;
   cin>>q;
   string st=s;
   while(q--)
   {
   	bool ok=false;
  	int i;
  	char v;
  	cin>>i>>v;
     
     if(st.size()<stt.size())
     {
     	cout<<"NO"<<endl;
     }
      else

      {
      	st[i-1]=v;
      	ok=(st.find(stt)!=string::npos);
      	if(ok)
      	{
      		cout<<"YES"<<endl;
      	}
      	else
      	{
      		cout<<"NO"<<endl;
      	}



      }

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