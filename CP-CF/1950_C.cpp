#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
  
  int h,m;char c;
  cin>>h>>c>>m;
  string am=(h<12?"AM":"PM");
  h=(h%12?h%12:12);
   
   cout<<(h<10?"0":"")<<h<<c<<(m<10?"0":"")<<m<<" "<<am<<endl;
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