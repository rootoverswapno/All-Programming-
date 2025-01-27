#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *left;
node *right;
};
node *create(int value)
{
   node *newnode=new node;
   newnode->data=value;
   newnode->left=nullptr;
   newnode->right=nullptr;

   return newnode;  
}
node *insert(node *root,int value)
{
     if(root==nullptr)
     {
        return create(value);
     }
     if(value<root->data)
     {
      root->left=insert(root->left,value);
     }
     else if(value>root->data)
     {
      root->right=insert(root->right,value);
     }

     return root;
}

void inorderTraversal(node *root)
{
   if(root==nullptr)
   return;

   inorderTraversal(root->left);
   cout<<root->data<<" ";
   inorderTraversal(root->right);
}
int main()
{
node *root=nullptr; 

root=insert(root,10);
root=insert(root,6);
root=insert(root,14);
root=insert(root,5);
root=insert(root,7);
root=insert(root,11);
root=insert(root,16);

cout << "Inorder Traversal of BST: ";
inorderTraversal(root);
cout << endl;

return 0;
}