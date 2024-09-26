#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define ull unsigned long long
using namespace std;

int main()
{
    
    ll n,m,a;
    cin>>n>>m>>a;
    ull b=(ceil((double)n/a))*(ceil((double)m/a));
    cout<<b<<endl;
    return 0;
}