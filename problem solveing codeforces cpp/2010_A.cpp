#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &i:v)
        {
            cin>>i;
        }
        int sum=0;
        for(int i=0;i<n;++i)
        {
           
            sum+=(i%2==0)?v[i]:-v[i];

        }
        cout<<sum<<endl;

    }



return 0;
}