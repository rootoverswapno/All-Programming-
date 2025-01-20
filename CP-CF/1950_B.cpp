#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){

int n;
cin>>n;
 char arr[2*n][2*n];

for(int i=0;i<2*n;++i)
{
    for(int j=0;j<2*n;++j)
    {
      if(((i/2)+(j/2))%2==0) cout<<"#";
      else
       cout<<".";
    }
    cout<<endl;

}

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