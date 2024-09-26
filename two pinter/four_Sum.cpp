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
    int x;
    cin>>x;
    for(int i=0;i<n-3;++i)
    {
        for(int j=i+1;j<n-2;++j)
        {
            int lo=j+1;
            int hi=n-1;
            while(lo<hi)
            {
                int sum=v[i]+v[j]+v[lo]+v[hi];
                if(sum==x)
                {
                    cout<<v[i]<<" "<<v[j]<<" "<<v[lo]<<" "<<v[hi]<<endl;
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
    }



    return 0;
}