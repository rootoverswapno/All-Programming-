#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<pair<int,int>>&v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
   vector <pair<int,int>>v={{1,2},{2,3},{4,5}}; 
   printvec(v);
    return 0;
}