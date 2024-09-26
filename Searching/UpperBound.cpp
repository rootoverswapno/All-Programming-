#include<bits/stdc++.h>
using namespace std;
int UpperBound(vector<int>&v,int element)
{
    int lo=0,hi=v.size()-1,mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)>>1;
        if(v[mid]<=element)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]>element)
    {
        return lo;
    }
    if(v[hi]>element)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    int to_find;
    cin>>to_find;
    int up=UpperBound(v,to_find);
    cout<<up<<" "<<(up!=-1?v[up]:-1)<<endl;;



    return 0;
}