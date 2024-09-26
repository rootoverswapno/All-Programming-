#include <bits/stdc++.h>
using namespace std;
char small(char ch)
{
    return ch + ('a' - 'A');
}
char upper(char c)
{
    return 'A'+(c-'a');
}
int main()
{

    string s;
    cin >> s;
    bool istrue=true;
    for (int i = 0; i < s.size(); i++)
    {

      if(s[i]>=97)
      {
        istrue=false;
        break;
      }
    }
    if(istrue)
    {
        for(int i=0;i<s.)
    }
  
    cout << s<< endl;
    return 0;
}