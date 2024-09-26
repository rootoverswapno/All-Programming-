#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    int lo,hi;
    for(int i=n-1;i>=0;--i)
    {
        int x=v[i];
        lo=0;
        hi=i-1;
        while(lo<hi)
        {
            int sum=v[lo]+v[hi];
            if(x==sum)
            {
                cout<<x<<" "<<v[lo]<<" "<<v[hi]<<endl;
            }
            if(sum<x)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }



    return 0;
}