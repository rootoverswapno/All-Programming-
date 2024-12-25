#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int value):val(value),left(nullptr),right(nullptr){}
};
void bfs(node *root)
{
    vector<int>v;
    if(root==nullptr)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int mx=INT_MIN;
        int l=q.size();
        for(int i=0;i<l;++i)
        {

            node * current = q.front();
            q.pop();
            mx=max(mx,current->val);
            if(current->left)
            {
               q.push(current->left);
            }
             if(current->right)
            {
               q.push(current->right);
            }

        }
        
        v.push_back(mx);

        

    }

    for(auto &i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}

int main()
{
   node *root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);


   bfs(root);



return 0;
}