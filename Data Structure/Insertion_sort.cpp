#include<bits/stdc++.h>
using namespace std;
//insertion sorting algorithm;
vector<int>insertion(vector<int>&v)
{
    for(int i=1;i<v.size();++i)
    {
        int current =v[i];
        int j=i-1;
        while (v[j]>current&&j>=0)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
        
    }
    return v;
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

    insertion(v);
    for(auto &i:v)
    {
        cout<<i<<" ";
    }


    return 0;
}