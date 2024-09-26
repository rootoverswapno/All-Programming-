#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
string str;
int i,n,l;
cin>>n;
for(i=1;i<=n;i++)
{
  cin>>str;
  l=str.size();
  if(l>10)
  {
    cout<<str[0]<<l-2<<str[l-1]<<endl;
  }

  else
  {
    cout<<str<<endl;
  }
  
}

    return 0;
}