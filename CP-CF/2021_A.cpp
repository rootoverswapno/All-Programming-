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
    for(int &num:v)
    {
        cin>>num;
    }
    // sort(v.begin(),v.end());
    int nn=v.size();
   int sum=v[0];
    for(int i=1;i<nn;++i)
    {
        sum+=v[i];
        sum=sum/2;
    }
    cout<<sum<<endl;

 }
return 0;
}