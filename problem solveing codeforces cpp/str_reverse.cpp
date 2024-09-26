#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    // vector<char>v;
    

    // for(int i=s.size()-1;i>=0;i--)
    // {
    //     v.push_back(s[i]);
    // }
    reverse(s.begin(),s.end());
    for(int i=0;i<6;++i)
    {
        cout<<s[i];
    }
   

    return 0;
}