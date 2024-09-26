#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={2,4,6,8};
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it=it+1)
    {
        cout<<(*it)<<endl;
    }

    return 0;
}