#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    bool found = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        int lo=i+1;
        int hi=n-1;
        while (lo<hi)
        {
              int current=v[i]+v[lo]+v[hi];
              if(current==target)
              {
                cout<<"YES"<<endl;
                cout<<v[i]<<" "<<v[lo]<<" "<<v[hi]<<endl;
                found=true;
                break;
              }
              if(current<target)
              {
                lo++;
              }
              else
              {
                hi--;
              }
        }
        
    }
    if(found==true)
    {
       
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}