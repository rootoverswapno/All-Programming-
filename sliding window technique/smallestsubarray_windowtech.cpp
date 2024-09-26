#include <bits/stdc++.h>
using namespace std;
int lenght(int arr[], int n, int x)
{
    int lo=0,hi=0;
    int minlen=n+1;
    int maxsum=0;
    int i,j;
    while(hi<n)
    {
        while(maxsum<=x&&hi<n)
        {
            maxsum+=arr[hi++];
        }
        while(maxsum>x&&lo<n)
        {
            if(hi-lo<minlen)
            {
                minlen=hi-lo;
                i=lo;
                j=hi;
            }
            maxsum-=arr[lo++];
        }
    }
    for(int p=i;p<j;++p)  
    {
        cout<<arr[p]<<" ";
    }
    cout<<endl; 
   
    return minlen;


}
int main()
{

    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 51;
    cout << lenght(arr, n, x) << endl;

    return 0;
}