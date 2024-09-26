#include<bits/stdc++.h>
using namespace std;
int ub(vector<int>&v,int to_find)
{
    int lo=0;
    int hi=v.size()-1;
    int mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)>>1;
        if(v[mid]<=to_find)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]>to_find)
    {
         return lo;
    }
    if(v[hi]>to_find)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int lb(vector<int>&v,int to_find)
{
    int lo=0;
    int hi=v.size()-1;
    int mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)>>1;
        if(v[mid]<to_find)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]>=to_find)
    {
         return lo;
    }
    if(v[hi]>=to_find)
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
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    int to_find;
    cin >> to_find;
    int llb=ub(v,to_find);
       if (llb != -1)
    {
        cout << v[llb] << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }



    return 0;
}