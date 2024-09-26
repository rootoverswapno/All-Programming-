#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p<q-1)
        {
          c++;
        }
    }
    cout<<c<<endl;
    return 0;
}