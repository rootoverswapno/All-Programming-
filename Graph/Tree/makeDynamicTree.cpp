#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x):val(x),left(NULL),right(NULL){}
};
Node* insert(Node *root,int value)
{
    if(!root)
    {
        return new Node(value);
    }
    if(!root->left)
    {
        root->left=new Node(value);
    }
    else if(!root->right)
    {
        root->right=new Node(value);
    }
    else
    {
        root->left=insert(root->left,value);
    }
   return root;
}
void inorder(Node * root)
{
    if(!root)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
     Node *root=nullptr;
     while(true)
     {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        root=insert(root,x);
     }
     cout<<"Inorder Traversal";
     inorder(root);    



return 0;
}