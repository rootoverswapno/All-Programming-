#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, sum1 = 0;
    string s;
    cin >> n;
    while (n--)
    {
     cin>>s;
     if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }

    }

    return 0;
}