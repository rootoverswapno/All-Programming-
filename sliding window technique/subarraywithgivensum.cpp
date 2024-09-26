#include<bits/stdc++.h>
using namespace std;
vector<int>subarraysum(vector<int>&v,int sum)
{
    int n=v.size();
    vector<int>vv;
    for(int i=0;i<n;++i)
    {
        int su=0;
        for(int j=i;j<n;++j)
        {
            su+=v[j];
            if(su==sum)
            {
                vv.push_back(i+1);
                vv.push_back(j+1);
                return vv;
            }
        }
    }
    return {-1};
}
int main()
{
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v)
    {
        cin>>i;
    }
    int sum=23;
    vector<int>result=subarraysum(v,sum);
    for(auto p:result)
    {
        cout<<p<<" ";
    }
    cout<<endl;

    return 0;
}