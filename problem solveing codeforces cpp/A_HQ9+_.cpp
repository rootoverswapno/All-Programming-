#include<iostream>
using namespace std;

int main()
{
  string s;
  cin>>s;
  int len=s.size();
  int count=0;
  for(int i=0;i<len;++i)
  {
    if(s[i]>=43&&s[i]<=122)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            count++;
        }
    }
  }
  if(count>0)
  {
    cout<<"YES"<<endl;
  } 
  else
  {
    cout<<"NO"<<endl;
  }  
    return 0;
}