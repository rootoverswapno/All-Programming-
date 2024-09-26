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
    //0(n^2) complexity
    sort(v.begin(),v.end());
    int lo,hi;
    for(int i=0;i<n-2;++i)
    {
        lo=i+1;
        hi=n-1;
        while(lo<hi)
        {
            int k=v[i]+v[lo]+v[hi];
            if(k==0)
            {
               cout<<v[i]<<"  "<<v[lo]<<" "<<v[hi]<<endl;
               lo++;
               hi--;
            }
            if(k<0)
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