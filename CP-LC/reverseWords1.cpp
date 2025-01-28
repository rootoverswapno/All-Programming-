#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   vector<string>store;
   string word="";
   for(char c:s)
   {
    if(c==' ')
    {
        if(!word.empty())
        {
            store.push_back(word);
            word="";
        }
    }
    else
    {
        word+=c;
    }
   } 
   if(!word.empty())
   {
      store.push_back(word);
   }
   
   reverse(store.begin(),store.end());
   string res;
   for(int i=0;i<store.size();++i)
   {
    res+=store[i];
    if(i<store.size())
    {
      res+=" ";
    }
   }

   for(auto c:res)
   {
    cout<<c;
   }
   cout<<endl;
return 0;
}