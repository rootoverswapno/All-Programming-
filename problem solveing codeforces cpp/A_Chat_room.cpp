#include<iostream>
using namespace std;

int main()
{   int c=0;
    string s,b;
     b="hello";
     cin>>s;
    
    for(int i=0;i<s.size();++i)
    {
        if(s[i]==b[c])
        {
           c++;
           if(c==5)
           {
            break;
           }
        }
        
          
    }
    if(c==5)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}