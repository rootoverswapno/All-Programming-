#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int num=0;
int p=1;
 for(int i=s.size()-1;i>=0;--i)
 {
    if(s[i]=='1')num=num+p;
    p*=2;
 }
 cout<<num<<endl;
return 0;
}