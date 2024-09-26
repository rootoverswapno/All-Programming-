#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;
    int l=s.size();
    for ( int i = 0; i <l; i++)
    {
        if(s[i]==p[i])
        {
            s[i]='0';
        }
        else
        {
            s[i]='1';
        }
       
    }
   cout <<s<< endl;
    return 0;
}