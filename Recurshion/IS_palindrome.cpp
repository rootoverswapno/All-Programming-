#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int lo,int hi,string &s)
{
    if(lo>=hi)
    {
        return true;
    }
    if(s[lo]!=s[hi])
    {
        return false;
    }
    else
    {
        isPalindrome(++lo,--hi,s);
    }
}
int main()
{
    string s;
    cin>>s;
    int l=0;
    int r=s.size()-1;
    if(isPalindrome(l,r,s))
    {
       cout<<"Palindrome"<<endl;
    }
    else
    cout<<"NOT Palindrome"<<endl;



    return 0;
}