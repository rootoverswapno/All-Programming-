#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      map<char, int> m;
      int n;
      cin >> n ;
      string s;
      cin>>s;
      for (int i = 0; i < n; ++i)
      {
         m[s[i]]++;
      }
      int c=0;
      for (auto p : m)
      {
         c=max(c,p.second);
      }
      cout<<max(n-c+1,c)<<endl;
   }
   return 0;
}