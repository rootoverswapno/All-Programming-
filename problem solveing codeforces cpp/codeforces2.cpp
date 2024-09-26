#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
string str;
int i,n,l;
cout<<"Enter number:";
cin>>n;
l=str.size();
for(i=1;i<=n;i++)
{
  cin>>str;
  if(l>10)
  {
    cout<<str[0]<<l-1<<str[l-1]<<endl;
  }

  else
  {
    cout<<str<<endl;
  }
  
}

    return 0;
}