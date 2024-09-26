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
    m[3]="efg";
    m[4]="ghi";
    m[5]="cde";
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
 cout<<endl;
 auto i=m.find(1);
 if(i==m.end())
 {
      cout<<"NO VALUE";
 }
 else
 {
    cout<<(*i).first<<" "<<(*i).second<<endl;
 }

 cout<<endl;

 m.erase(3);
 print(m);
    return 0;
}