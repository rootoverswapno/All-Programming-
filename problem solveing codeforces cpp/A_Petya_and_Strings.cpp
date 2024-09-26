#include<iostream>
#include<string.h> 
#include<cstring>
using namespace std;
int main()
{
    int l;
    string s,p;
    cin>>s>>p;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        s[i]=toupper(s[i]);
        p[i]=toupper(p[i]);

    }
    if(s==p)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>p[i])
            {
                cout<<"1"<<endl;
                return 0;
            }
           if(s[i]<p[i])
            {
                cout<<"-1"<<endl;
               return 0;
            }
        }
    }


    return 0;
}