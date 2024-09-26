#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int>&v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int>v2=v;
    v2.push_back(5);
    printvec(v);
    printvec(v);
    cout<<endl;
    printvec(v2);

    return 0;
}