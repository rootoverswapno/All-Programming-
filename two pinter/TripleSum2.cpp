#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    int target;
    cin>>target;
    int left,right;
    for(int i=0;i<n-2;++i)
    {
        int x=v[i];
        left=i+1;
        right=n-1;
        while(left<right)
        {
            int sum=x+v[left]+v[right];
            if(sum==target)
            {
                cout<<x<<" "<<v[left]<<" "<<v[right]<<endl;
                break;
            }
            else if(sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }

        }
        

    }



    return 0;
}