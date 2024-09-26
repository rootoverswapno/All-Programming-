#include<bits/stdc++.h>
using namespace std;
void printPrime(int n)
{
    vector<int>prime(n,0);
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=1;i<=n;++i)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    printPrime(n);




    return 0;
}