#include<bits/stdc++.h>
using namespace std;
int main()
{

  string a,b;
  cin>>a>>b;
  int i=a.size()-1;
  int j=b.size()-1;
  int carry =0;
  string result;
  while(i>=0||j>=0||carry>0)
  {
   int sum=carry;
   if(i>=0)sum+=a[i--]-'0';
   if(j>=0)sum+=b[j--]-'0';
   carry=sum/2;
   result=char((sum%2)+'0')+result;
  }
  cout<<result<<endl;


return 0;
}