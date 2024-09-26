#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lo =0;
    int hi=s.size()-1;
    bool ok=false;
    while(lo<=hi)
    {
       if(s[lo]!=s[hi])
       {
        ok=true;
        break;
       }
       else{
        lo++;
        hi--;
       }
       
    }
    if(!ok)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    cout<<"NOT Palindrome";



    return 0;
}