#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int l1,l2,j;
    int a=0;
    string s,p;
    cin>>s>>p;
    l1=s.size();
    l2=p.size();
    for(int i=0,j=l2-1;i<l1,j>=0;i++,j--)
    {
      if(s[i]==p[j])
      {
       a=1;
      }

      else
      {
        a=0;
        break;
      }
    }
if(a==1)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
   
    return 0;
}