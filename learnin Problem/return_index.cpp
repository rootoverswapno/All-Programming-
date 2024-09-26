#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int x;
    cout << "Enter target number : ";
    cin>>x;
    vector<int>v1;
    for(int i=0;i<v.size()-1;++i)
    {
        for(int j=1;j<v.size();++j)
        {
           if(v[i]+v[j]==x)
           {
            v1.push_back(i);
            v1.push_back(j);
           }
        }
    }
    for(int i=0;i<v1.size();++i)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}