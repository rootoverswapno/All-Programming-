#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    string s4=s+s1;
    sort(s2.begin(),s2.end());
    sort(s4.begin(),s4.end());
    if(s2==s4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}