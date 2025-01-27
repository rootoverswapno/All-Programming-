#include <iostream>
using namespace std;

// Definition of the Node
struct Node {
    int key;
    Node* left, * right;

    Node(int val) {
        key = val;
        left = right = nullptr;
    }
};

// Function to insert a new node with given key in BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to find the minimum value node in the given BST
Node* minValueNode(Node* node) {
    Node* current = node;

    // Loop to find the leftmost leaf
    while (current && current->left != nullptr)
        current = current->left;

    return current;
}

// Function to delete a node with given key from BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    // If the key to be deleted is smaller than the root's key, then it lies in left subtree
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    }
    // If the key to be deleted is greater than the root's key, then it lies in right subtree
    else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    }
    // If key is same as root's key, then this is the node to be deleted
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

// Function to do inorder traversal of BST
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Inorder traversal of the given tree \n";
    inorder(root);

    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    inorder(root);

    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    inorder(root);

    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    inorder(root);

    return 0;
}
 