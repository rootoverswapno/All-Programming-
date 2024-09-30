#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    map<char,int>mp;
    for( char &i:s)
    {
       mp[i]++;
    }
    for(auto &i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }


return 0;
}