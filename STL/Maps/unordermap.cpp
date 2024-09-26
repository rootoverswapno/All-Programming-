#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m)
{
    cout<<m.size()<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

}
int main()
{
    unordered_map<int,string>m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="acd";
    m[4]="a";
    m[5]="cde";
    print(m);
  
    return 0;
}