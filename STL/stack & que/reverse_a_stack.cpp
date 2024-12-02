#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    stack<int>st;
    stack<int>st1;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
    cout<<st.top()<<" ";
    st1.push(st.top());
    st.pop();
    }
    cout<<endl;
      while (!st1.empty())
    {
    cout<<st1.top()<<" ";
    st1.pop();
    }
    



    return 0;
}