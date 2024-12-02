#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    /*
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
       cout<<s.top()<<endl;
       s.pop();
    }
    */
    queue<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
       cout<<s.front()<<endl;
       s.pop();
    }
    
    
    return 0;
}