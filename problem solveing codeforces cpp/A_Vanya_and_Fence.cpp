#include<iostream>
using namespace std;

int main()
{
    int n,h,p=0,q=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
          p++;
        }
        else
        {
            q+=2;
        }
    }
    cout<<p+q<<endl;
    return 0;
}