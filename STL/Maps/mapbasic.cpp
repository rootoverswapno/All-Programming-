#include<bits/stdc++.h>
using namespace std;
void print (map<int,string>&m)
{
    cout<<m.size()<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main()
{
    
     map<int,string>m;
     m[1]="abc";
     m[2]="bcd";
     m[3]="cde";
     m.insert(make_pair(4,"afg"));
     m.insert({5,"mno"});
    //  map<int,string>::iterator it;
    //    for(it=m.begin();it!=m.end();it++)
    //    {
    //        cout<<(*it).first<<" "<<(*it).second<<endl;
    //    }
//        for(auto &pr:m)
// {
//     cout<<pr.first<<" "<<pr.second<<endl;
// }  
//     for(auto &p:m)
//     {
//         cout<<p.first<<" "<<p.second<<" "<<endl;
//     }
print(m);
  return 0;
}