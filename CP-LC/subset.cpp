#include<bits/stdc++.h>
using namespace std;
void generate(vector<int>&v,int i,vector<int>&nums,vector<vector<int>>&sub)
{
    if(i==nums.size())
    {
        sub.push_back(v);
        return;
    }
         v.push_back(nums[i]);
         generate(v,i+1,nums,sub);
         v.pop_back();
         generate(v,i+1,nums,sub);
}
int main()
{
vector<vector<int>>sub;
vector<int>nums={1,2,3};
vector<int>v;
generate(v,0,nums,sub);
for(auto &i:sub)
{
    for(auto &j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}



return 0;
}