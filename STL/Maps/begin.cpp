#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;
    map<string,int>::iterator it;
    it=mp.begin();
    while(it!=mp.end())
    {
     cout<<"key : "<<it->first<<" "<<"value :"<<it->second<<endl;
     it++;
    }



    return 0;
}