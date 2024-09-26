#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int stack_arr[MAX];
int top = -1;
int ch;
void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow";
        return;
    }
    else
    {
        stack_arr[++top] = data;
    }
}
int pop()
{
    int value;
    if (top == -1)
    {
        cout << "Stack Underflow Please push some element " << endl;
        // exit(1);
    }
    else
    {
        value = stack_arr[top--];
        return value;
    }
}
void print()
{
    if (top == -1)
    {
        cout<<endl<<endl;
        cout << "Stack Underflow Again choose a valid choice " << endl;
        cout << endl;
        cout<<endl;
    }
    else
    {
        cout << "Stack is : ";
        for (int i = top; i >= 0; --i)
        {
            cout << stack_arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    while (true)
    {
        // system("cls");
        // cout << "Enter Your Choise:" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. DISPLAY" << endl;
        cout << "4. EXIT" << endl;
        cout << "Select Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            int x;
            cout << "Enter Push value :";
            cin >> x;
            push(x);
            // print();
            break;
        }
        case 2:
        {
            int val = pop();
            cout << "Pop Element : " << val << "At top position : " << top;
            // print();
            break;
        }
        case 3:
        {
            print();
            break;
        }
        case 4:
        {

            exit(1);

            break;
        }
        default:
            break;
        }
    }
    return 0;
}