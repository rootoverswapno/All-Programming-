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
    m[1]="ab";
    m[2]="bc";
    m[3]="ca";
    m[4]="mn";
    auto it=m.find(7);
    if(it!=m.end())
    m.erase(it);
    print(m);
    return 0;
}