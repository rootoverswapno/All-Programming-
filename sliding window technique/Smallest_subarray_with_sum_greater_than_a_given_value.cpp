#include<bits/stdc++.h>
using namespace std;
int main()
{

    //applying Brutforce method

     int n;
    cin >> n;
    vector<int> v(n);
    int max_sum=0;
    for (auto &i : v)
    {
        cin >> i;
    }
    int k;
    cin >> k;
    int sum=0;
    int min_len=n+1;
    for(int i=0;i<n;++i)
    {
        sum=v[i];
        for(int j=i+1;j<n;++j)
        {
           sum+=v[j];
           if((sum>k)&&(j-i+1)<min_len)
           {
            min_len=(j-i+1);
           }
        }

    }
    if(min_len==n+1)
    {
       cout<<"Not Possible "; 
    }
    cout<<min_len<<endl;



    return 0;
}