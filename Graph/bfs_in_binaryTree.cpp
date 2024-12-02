#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
    };
    
  vector<vector<int>>levelOrder(TreeNode *root)
  {
    vector<vector<int>>result;
    if(!root)
    {
        return result;
    }
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        vector<int>levels;
        int level=q.size();
       
        for(int i=0;i<level;++i)
        {
             TreeNode *ptr=q.front();
             q.pop();
             levels.push_back(ptr->val);
             if(ptr->left)
             {
                q.push(ptr->left);
             }
             if(ptr->right)
             {
                q.push(ptr->right);
             }
        }
        result.push_back(levels);
        levels.clear();

    }
    return result;

  }


int main()
{
  
  TreeNode *root=new TreeNode(3);
  root->left=new TreeNode(9);
  root->right=new TreeNode(20);
  root->right->left=new TreeNode(15);
  root->right->right=new TreeNode(7);
  
  vector<vector<int>>levels=levelOrder(root);


   for(auto i:levels)
   {
    for(auto j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
   }

return 0;
}