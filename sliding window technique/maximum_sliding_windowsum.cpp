#include<bits/stdc++.h>
using namespace std;
void windowsum(vector<int>v,int xn)
{
    int windowsum1=0;
    for(int i=0;i<xn;++i)
    {
        windowsum1=windowsum1+v[i];
    }
    int max1=windowsum1;
    for(int i=xn;i<v.size();++i)
    {
        windowsum1=windowsum1+v[i]-v[i-xn];
         max1=max(max1,windowsum1);
    }
    cout<<"Maximum Window sum is : "<<max1<<endl;
   
    int windowsum2=0;
    for(int i=0;i<xn;++i)
    {
        windowsum2=windowsum2+v[i];
    }
    int min1=windowsum2;
    for(int i=xn;i<v.size();++i)
    {
        windowsum2=windowsum2+v[i]-v[i-xn];
         min1=min(min1,windowsum2);
    }
     cout<<"Minimum Window sum is : "<<min1<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter window size :";
    int xx;
    cin>>xx;
     
      windowsum(v,xx);

    return 0;
}