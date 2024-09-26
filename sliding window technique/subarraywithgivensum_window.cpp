#include<bits/stdc++.h>
using namespace std;
vector<int>subarraysum(vector<int>&v,int sum)
{
    int n=v.size();
    vector<int>vv;
    int su=0;
    int j=0;int k=0;
    for(int i=0;i<n;++i)
    {
        su+=v[i];
        while(su>sum&&j<i)
        {
            su-=v[j];
            ++j;
        }
        if(su==sum)
        {
            vv.push_back(j+1);
            vv.push_back(i+1);
            return vv;
        }
    }
    return {-1};
}
int main()
{
    vector<int> v = {15, 2, 4, 8, 9, 5, 10, 23};
    int sum=23;
    vector<int>result=subarraysum(v,sum);
    for(int p:result)
    {
        cout<<p<<" ";
    }


    return 0;
}