#include<bits/stdc++.h>
using namespace std;
const long long M=1e7+7;
vector<long long>v(M);
long long s(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
} int main()
{
    v[0]=0;
    for(int i=1;i<M;++i) 
    {
        v[i]=v[i-1]+s(i);
    }  
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<v[n]<<endl;
    }  
    return 0;
}
