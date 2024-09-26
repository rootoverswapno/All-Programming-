#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *link;
};

void insertatlast(struct node *&head, int data) {
    struct node *temp = new node;
    temp->data = data;
    temp->link = NULL;
    if (head == NULL) {
        head = temp;
        return;
    } else {
        struct node *last = head;
        while (last->link != NULL) {
            last = last->link;
        }
        last->link = temp;
    }
}

void insertasfirst(struct node *&head, int data) {
    struct node *temp = new node;
    temp->data = data;
    temp->link = head;
    head = temp;
}

void insertAtPosition(struct node *&head, int data, int position) {
    if (position <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    struct node *temp = new node;
    temp->data = data;
    temp->link = NULL;

    if (position == 1 || head == NULL) {
        temp->link = head;
        head = temp;
        return;
    }

    struct node *current = head;
    for (int i = 1; i < position - 1 && current->link != NULL; ++i) {
        current = current->link;
    }

    if (current == NULL || current->link == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    temp->link = current->link;
    current->link = temp;
}

void insertAfterValue(struct node *&head, int dataToFind, int newData) {
    struct node *temp = new node;
    temp->data = newData;
    temp->link = NULL;

    struct node *current = head;
    while (current != NULL && current->data != dataToFind) {
        current = current->link;
    }

    if (current == NULL) {
        cout << "Data not found in the list." << endl;
        return;
    }

    temp->link = current->link;
    current->link = temp;
}

void deleteAtLast(struct node *&head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->link == NULL) {
        delete head;
        head = NULL;
        return;
    }

    struct node *temp = head;
    while (temp->link->link != NULL) {
        temp = temp->link;
    }

    delete temp->link;
    temp->link = NULL;
}

void deleteAtFirst(struct node *&head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    struct node *temp = head;
    head = head->link;
    delete temp;
}

void deleteAtPosition(struct node *&head, int position) {
    if (head == NULL || position <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    struct node *temp = head;

    if (position == 1) {
        head = temp->link;
        delete temp;
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->link;
    }

    if (temp == NULL || temp->link == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    struct node *next = temp->link->link;
    delete temp->link;
    temp->link = next;
}

void deleteAfterValue(struct node *&head, int dataToFind) {
    struct node *current = head;

    while (current != NULL && current->data != dataToFind) {
        current = current->link;
    }

    if (current == NULL || current->link == NULL) {
        cout << "Data not found in the list or no node to delete after" << endl;
        return;
    }

    struct node *temp = current->link;
    current->link = temp->link;
    delete temp;
}

void printlist(struct node *ptr) {
    int i = 1;
    cout << "Elements are: ";
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->link;
        i++;
    }
    cout << endl;
}

int main() {
    struct node *head = NULL;

    do {
        cout << "1. Insert data at last" << endl;
        cout << "2. Insert data at first" << endl;
        cout << "3. Insert data at position" << endl;
        cout << "4. Insert data after certain element" << endl;
        cout << "5. Delete data at last" << endl;
        cout << "6. Delete data at first" << endl;
        cout << "7. Delete data at position" << endl;
        cout << "8. Delete data after certain element" << endl;
        cout << endl;
        cout << "Choose an option: ";
        int ch;
        cin >> ch;
        switch (ch) {
            case 1: {
                cout << "Enter data: ";
                int x;
                cin >> x;
                insertatlast(head, x);
                system("CLS");
                printlist(head);
                break;
            }
            case 2: {
                cout << "Enter data: ";
                int x;
                cin >> x;
                insertasfirst(head, x);
                system("CLS");
                printlist(head);
                break;
            }
            case 3: {
                cout << "Enter data: ";
                int x;
                cin >> x;
                cout << "Enter position: ";
                int pos;
                cin >> pos;
                insertAtPosition(head, x, pos);
                system("CLS");
                printlist(head);
                break;
            }
            case 4: {
                cout << "Enter data to find: ";
                int x;
                cin >> x;
                cout << "Enter data to insert: ";
                int sd;
                cin >> sd;
                insertAfterValue(head, x, sd);
                system("CLS");
                printlist(head);
                break;
            }
            case 5: {
                deleteAtLast(head);
                system("CLS");
                printlist(head);
                break;
            }
            case 6: {
                deleteAtFirst(head);
                system("CLS");
                printlist(head);
                break;
            }
            case 7: {
                cout << "Enter position to delete: ";
                int pos;
                cin >> pos;
                deleteAtPosition(head, pos);
                system("CLS");
                printlist(head);
                break;
            }
            case 8: {
                cout << "Enter data to find: ";
                int x;
                cin >> x;
                deleteAfterValue(head, x);
                system("CLS");
                printlist(head);
                break;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    } while (true);

    return 0;
}
