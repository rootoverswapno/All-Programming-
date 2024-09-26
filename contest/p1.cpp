#include<bits/stdc++.h>
using namespace std;

int main()
{
    
int n;
cin>>n;
while(n--)
{
    string s;
    cin>>s;
    int c=0,c1=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='A')
        {
            c++;
        }
        if(s[i]=='B')
        {
            c1++;
        }
    }
    if(c>c1)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"B"<<endl;
    }
}
    return 0;
}