#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   vector<string>vs;
   while(ss>>word)
   {
     vs.push_back(word);
   }
   reverse(vs.begin(),vs.end());
   for(auto &i:vs)
   {
    cout<<i<<" ";
   }
   cout<<endl;



return 0;
}