#include<bits/stdc++.h>
using namespace std;
void Decreasing(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    Decreasing(n-1);
}
void Increasing(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    Increasing(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    Decreasing(n);
    



    return 0;
}