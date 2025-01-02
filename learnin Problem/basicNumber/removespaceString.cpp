#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   cout<<s<<endl;
   vector<char>vc;
   for(int i=0;i<s.size();++i)
   {
    if(s[i]==' ')
    {
        continue;
    } 
    else 
    
    {
        vc.push_back(s[i]);
    }

   }

   for(char &i:vc)
   {
    cout<<i;
   }
   cout<<"\n";

return 0;
}