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
    for(int i=0;i<n-2;++i)
    {
        if(v[i]+v[i+1]+v[i+2]==0)
        {
            cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
        }
    }
    cout << "No such triplet available" << endl;



    return 0;
}