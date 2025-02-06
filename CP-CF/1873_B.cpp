#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
 int n;
 cin>>n;
 vector<int>v(n);

 int index=0;
 int mn=INT_MAX;
 for(int i=0;i<n;++i)
 {
    cin>>v[i];
    if(v[i]<mn)
    {
        mn=v[i];
        index=i;
    }
 }
 v[index]=(v[index]+1);

  int pp=accumulate(v.begin(),v.end(),1,[](int a,int b){
    return a*b; 
  });
//   int product=1;
//   for(int i=0;i<n;++i)
//   {
//     product*=v[i];
//   }
  cout<<pp<<endl;


}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}