#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<string>word(n);
   for(string &i:word)
   {
    cin>>i;
   }
   map<string,int>wordcount;
   for(string &words:word)
   {
      wordcount[words]++;
   }
   for(auto &i:wordcount)
   {
    cout<<i.first<<" "<<i.second<<endl;
   }


return 0;
}