#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string &s,int lo,int hi)
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
        ispalindrome(s,lo+1,hi-1);
         ispalindrome(s,lo++,hi--);
    }
}
int main()
{
    string s;
    cin>>s;
    int lo=0;
    int hi=s.size()-1;
    if(ispalindrome(s,lo,hi))
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }



    return 0;
}