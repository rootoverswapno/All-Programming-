#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int c=0;
    while (n>0)
    {
        c=c+(n&1);
        n=n>>1;
    }
    return c;
    
}
string lexographically(string s,int k){
stack<char>st;
 int n=s.size();
 if(countSetBits(n)==1)
 {
     k=k/2;
 }
 else
 {
    k=k*2;
 }
 for(int i=0;i<n;++i)
 {
    while (!st.empty()&&k>0&&st.top()>s[i])
    {
       st.pop();
       k--; 
    }
    st.push(s[i]);  
 }
 while (!st.empty()&&k>0)
 {
    st.pop();
    k--;
 }
 string ans;
 while (!st.empty())
 {
    ans.push_back(st.top());
    st.pop();
 }
 reverse(ans.begin(),ans.end());
 return ans;
}
int main()
{  
    int k;
    string s;
    cin>>k>>s;
    cout<<lexographically(s,k)<<endl;
    return 0;
}