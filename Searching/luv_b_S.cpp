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
    int hi=n-1;
    int lo=0;
    int mid;
    cout<<"Enter find Element : ";
    int find_element;
    cin>>find_element;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(find_element>v[mid])
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
        if(v[lo]==find_element)
        {
            cout<<lo<<endl;
            cout<<v[lo]<<endl;
        }
        else if(v[hi]==find_element)
        {
            cout<<hi<<endl;
            cout<<v[hi]<<endl;
        }
        else
        {
            cout<<"NOT find"<<endl;
        }
    }



    return 0;
}