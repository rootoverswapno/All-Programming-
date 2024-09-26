#include<iostream>
#include <string>
using namespace std;
int main()
{
   int n,m,i,j;
   int a=0,b=0,c=0;
   string s;
   cin>>n;
   for(i=1;i<=n;i++)
   {
    cin>>s;
     m=s.size();
   }

   for(j=0;j<m;j++)
   {
    if(s[j]=='R'||s[j]=='G'||s[j]=='B')
    {
        if(s[j]=='R')
        {
            if(s[j]=='R'&& s[j+1]=='R')
            {
                a++;
            }
        }
        if(s[j]=='G')
        {
            if(s[j]=='G'&&s[j+1]=='G')
            {
                b++;
            }
        }
        if(s[j]=='B')
        {
            if(s[j]=='B'&&s[j+1]=='B')
            {
                c++;
            }
        }

    }

   }
   cout<<a+b+c<<endl;
   

}
