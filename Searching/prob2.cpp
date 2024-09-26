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
        int arr[n];
        int sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        int fast =0;
        if(n==1)
        {
            cout<<"YES"<<endl;
            
        }
        for(int i=0;i<n;++i)
        {
            sum=sum+arr[i];
        }
        
        int m=sum/n;
        long long end=0;
        for(int i=0;i<n;++i)
        {
            if(arr[i]>=m)
            {
                end+=(arr[i]-m);
            }
            else
            {
                int lastamaount=m-arr[i];
                if(m>=lastamaount)
                {
                    m-=lastamaount;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        cout<<"YES"<<endl;
    }
 
    return 0;
}