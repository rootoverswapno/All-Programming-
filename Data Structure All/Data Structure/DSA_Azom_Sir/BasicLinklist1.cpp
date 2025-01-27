#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node() {
        value = 0;
        next = NULL;
    }

    Node(int data) {
        value = data;
        next = NULL;
    }
};

class Linklist {
public:
    Node* head;

    Linklist() {
        head = NULL;
    }

    void insertnode(int data) {
        Node* newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void printList() {
        Node* temp = head;
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};

int main() {
    Linklist list;
   int  ct=1;
   cout<<"Enter Data : ";
    for(int i=0;i<ct;++i)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        list.insertnode(x);
        ct++;
        
    }
    
    // list.insertnode(1);
    // list.insertnode(2);
    // list.insertnode(3);
    list.printList();
    // cout << endl;

    return 0;
}
