#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
     int sum=0;
    for(int i=0;i<m;++i)
    {
        if(v[i]<=m)
        {
          sum=sum+v[i]; 
        }
    }
    cout<<abs(sum)<<endl;

    return 0;
}