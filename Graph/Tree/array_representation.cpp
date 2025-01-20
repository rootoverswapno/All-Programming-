#include<bits/stdc++.h>
using namespace std;
void printtree(vector<int>&tree)
{
    for(int i=0;i<tree.size();++i)
    {
        if(tree[i]==-1)
            continue;
        cout<<"Node : "<<tree[i]<<",";
        if(2*i+1<tree.size()&&tree[2*i+1]!=-1)
        cout<<"Left chield : "<<tree[2*i+1]<<",";
        if(2*i+2<tree.size()&&tree[2*i+2]!=-1)
         cout<<"right chield : "<<tree[2*i+2]<<" ,";

        cout<<endl;
    }
}
int main()
{

vector<int>tree={1,2,3,4,5,6,-1};
cout<<"Binary Tree Representation : \n";
printtree(tree);


return 0;
}