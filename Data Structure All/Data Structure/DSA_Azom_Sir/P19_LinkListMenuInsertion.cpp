#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void insertatlast(struct node *&head, int data)
{
    struct node *temp = new node;
    temp->data = data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct node *last = head;
        while (last->link != NULL)
        {
            last = last->link;
        }
        last->link = temp;
    }
}
void insertasfirst(struct node *&head, int data)
{
    struct node *temp = new node;
    temp->data = data;
    temp->link = head; 
    head = temp;
}
void insertAtPosition(struct node *&head, int data, int position)
{
    if (position <= 0)
    {
        cout << "Invalid position" << endl;
        return;
    }

    struct node *temp = new node;
    temp->data = data;
    temp->link = NULL;

    if (position == 1 || head == NULL)
    {
        temp->link = head;
        head = temp;
        return;
    }

    struct node *current = head;
    for (int i = 1; i < position - 1 && current->link != NULL; ++i)
    {
        current = current->link;
    }

    if (current == NULL || current->link == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    temp->link = current->link;
    current->link = temp;
}

void insertAfterValue(struct node *&head, int dataToFind, int newData)
{
    struct node *temp = new node;
    temp->data = newData;
    temp->link = NULL;

    struct node *current = head;
    while (current != NULL && current->data != dataToFind)
    {
        current = current->link;
    }

    if (current == NULL)
    {
        cout << "Data not found in the list." << endl;
        return;
    }

    temp->link = current->link;
    current->link = temp;
}

void printlist(struct node *ptr)
{
    int i = 1;
    cout << "Element are : ";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
        i++;
    }
    cout << endl;
}

int main()
{
    struct node *head = NULL;

    do
    {
       
        cout << "1. iNSERT DATA AS LAST :" << endl;
        cout << "2. iNSERT DATA AS FIRST:" << endl;
        cout << "3. INSERT DATA AS POSITION :" << endl;
        cout << "4. INSERT DATA AS CERTAIN ELEMENT :" << endl;
        cout<<endl;
         cout << "Enter Choose a option : " ;
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter data : ";
            int x;
            cin >> x;
            insertatlast(head, x);
            system("CLS");
            printlist(head);
            break;
        }
        case 2:
        {
            cout << "Enter data : ";
            int x;
            cin >> x;
            insertasfirst(head, x);
            system("CLS");
            printlist(head);
            break;
        }
        case 3:
        {
            cout << "Enter data : ";
            int x;
            cin >> x;
            cout << endl;
            cout << "Enter Position :";
            int pos;
            cin >> pos;
            insertAtPosition(head, x, pos);
            system("CLS");
            printlist(head);
            break;
        }
        case 4:
        {
            cout << "Enter find  data : ";
            int x;
            cin >> x;
            cout << "Enter Insert Data : ";
            int sd;
            cin >> sd;
            insertAfterValue(head, x, sd);
            system("CLS");
            printlist(head);
            break;
        }

        default:
        {
            cout << "Invalid choise ";
            break;
        }
        }

    } while (true);

    return 0;
}
