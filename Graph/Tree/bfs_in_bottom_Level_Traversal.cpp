#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x):val(x),left(NULL),right(NULL){}
};
 vector<vector<int>>bfs(Node* root)
 {
    vector<vector<int>>result;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int level=q.size();
        vector<int>levels;
        for(int i=0;i<level;++i)
        {
            Node *ptr=q.front();
            q.pop();
            levels.push_back(ptr->val);
            if(!root->left)
            {
                q.push(root->left);
            }
            if(!root->right)
            {
                q.push(root->right);
            }
        }
        result.push_back(levels);
        levels.clear();
    }

    reverse(result.begin(),result.end());
    return result;
 }
int main()
{
   Node *root=new Node(3);
   root->left=new Node(5);
   root->right=new Node(6);
   root->left->left=new Node(7);
   root->right->right=new Node(9);
   vector<vector<int>>result=bfs(root);


return 0;
}