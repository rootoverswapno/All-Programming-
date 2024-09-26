#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n,int k)
{
    int maxsum=INT_MIN;
    for(int i=0;i<n-k+1;++i)
    {
        int sum=0;
        for(int j=0;j<k;++j)
        {
            sum+=arr[i+j];
        }
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,n,k)<<endl;




    return 0;
}