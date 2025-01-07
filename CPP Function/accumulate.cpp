#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5};

  int sum=accumulate(v.begin(),v.end(),0);
  cout<<sum<<endl;

  int product=accumulate(v.begin(),v.end(),1,multiplies<int>());
  cout<<product<<endl;
  
   vector<string>vs={"hello"," ","world","!"};
   string res=accumulate(vs.begin(),vs.end(),string(""));
   cout<<res<<endl;
   

   int custom=accumulate(v.begin(),v.end(),0,[](int acc,int x){return acc+x*x;});
   cout<<custom<<endl;


return 0;
}