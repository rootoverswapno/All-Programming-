#include<bits/stdc++.h>
using namespace std;
void reverseSentence(string s)
{
    stack<string>st;
    for( int i=0;i<s.size();i++ )
    {
        string word;
        while(s[i]!=' '&&i<s.size())
        {
             word+=s[i];
             i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s;
      getline(cin,s);
    //    cout<<s<<endl;

       reverseSentence(s);

    return 0;
}