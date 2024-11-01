#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> v = {-5,-4,-3,-2,-1};
    int n = v.size();
    int ct=0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            for (int k = i; k <= j; ++k)
            {
                cout << v.at(k);
               
            }
             ct++;
            cout << " ";
        }
        cout << endl;
    }

    // cout<<endl<<ct<<endl;
    // int maxsum=INT_MIN;
    //  for(int i=0;i<n;++i)
    //  {
    //     int current=0;
    //     for(int j=i;j<n;++j)
    //     {
    //         current+=v.at(j);
    //         maxsum=max(maxsum,current);
    //     }

    //  }
    //  cout<<maxsum<<endl;
     int maxsum=INT_MIN;
    int current=0;
    for(int i=0;i<n;++i)
    {
        current+=v.at(i);
        maxsum=max(maxsum,current);
        if(current<0)
        {
            current=0;
        }


    }
    cout<<maxsum<<endl;
    return 0;
}