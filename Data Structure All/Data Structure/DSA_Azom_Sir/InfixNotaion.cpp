#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int top = -1;
int stack_arr[MAX];

void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow";
        
    }
    else
    {
        stack_arr[++top] = data;
    }
}

int pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow";
       
    }
    else
    {
        return stack_arr[top--];
    }
} 
int main()
{
    string s;
    cout << "Enter postfix expression: ";
    getline(cin, s);

    for (char c : s)
    {

        if (isdigit(c))
        {
            push(c - '0');
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            int v1 = pop();
            int v2 = pop();
            int result;
            switch (c)
            {
            case '+':
                result = v1 + v2;
                break;
            case '-':
                result = abs(v1 - v2);
                break;
            case '*':
                result = v1 * v2;
                break;
            case '/':
                if (v1 == 0)
                {
                    cout << "Division by zero error" << endl;
                  
                }
                result = v2 / v1;
                break;
            }
            push(result);
        }
        else
        {
            cout << "Invalid character in expression" << endl;
            
        }
    }
      cout << "Result: " << stack_arr[top] << endl;
    return 0;
}
