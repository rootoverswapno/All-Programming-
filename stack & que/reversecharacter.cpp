#include<bits/stdc++.h>
using namespace std;
void reversechar(string s)
{
    stack<char>st;
    for(int i =0;i<s.size();++i)
    {
        string ans;
        while (s[i]!='\0'&&i<s.size())
        {
            st.push(s[i]);
            i++;
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        
    }
}
int main()
{
    string s;
   getline(cin,s);
    reversechar(s);



    return 0;
}