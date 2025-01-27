#include <iostream>
#include <string>
#include <stack>
#include <cstdlib> // For abs function

using namespace std;

#define MAX 1000

int top = -1;
int stack_arr[MAX];

void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow";
        exit(1);
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
        exit(1);
    }
    else
    {
        return stack_arr[top--];
    }
}

int main()
{
    string s = "5 6 2 + * 12 4 / -";
  
    string token;
    stringstream ss(s);
    while (ss >> token)
    {
        if (isdigit(token[0]))
        {
            push(stoi(token));
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            int v1 = pop();
            int v2 = pop();
            int result;
            if (token == "+")
            {
                result = v1 + v2;
            }
            else if (token == "-")
            {
                result = v2 - v1;
            }
            else if (token == "*")
            {
                result = v1 * v2;
            }
            else if (token == "/")
            {
                if (v1 == 0)
                {
                    cout << "Division by zero error" << endl;
                    exit(1);
                }
                result = v2 / v1;
            }
            push(result);
        }
        else
        {
            cout << "Invalid character in expression" << endl;
            exit(1);
        }
    }
    cout << "Result: " << stack_arr[top] << endl;
    return 0;
}
