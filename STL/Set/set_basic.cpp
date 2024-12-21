#include<bits/stdc++.h>
using namespace std;
int main()
{


vector<int>v={1,2,3,4,5,6,7,8,9,1,2,3,4,5};
set<int>ss(v.begin(),v.end());
int n;
cin>>n;
set<int>s(n);
for(auto &i:s)
{
    cin>>i;
}
for(auto i:s)
{
    cout<<i<<" ";
}
cout<<endl;


return 0;
}