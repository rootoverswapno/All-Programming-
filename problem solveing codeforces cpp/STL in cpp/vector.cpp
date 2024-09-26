#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int>v){
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i] << " ";
    }
    cout<<endl;
}

int main() 
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
         printvec(v);
        v.push_back(x);
    }
   printvec(v);
    return 0;
}