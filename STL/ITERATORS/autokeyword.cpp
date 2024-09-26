#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   
    int n;
    cin>>n;
    vector<pair<int,int>>v_p;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v_p.push_back({x,y});
    }
    for(auto&value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}