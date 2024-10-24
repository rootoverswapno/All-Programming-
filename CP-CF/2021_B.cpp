#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int &num:v)
    {
        cin>>num;
    }
    sort(v.begin(),v.end());
    int nn=v.size();
    int mex=0;

    for(int i=0;i<nn-1;++i)
    {
        if(v[i]==v[++i])
        {
            continue;
        }
        else
        {
          mex=v[i];
        }
    }
    cout<<mex<<endl;

}



return 0;
}