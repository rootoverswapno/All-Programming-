#include<bits/stdc++.h>
#define int long long 
#define v(n) vector<int>v(n)
#define o cout<<
#define in cin>>
using namespace std;

void solve_de_vai()
{
    int n;
    in n;
    string s;
    in s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
        {
            c++;
            i+=2;
        }
        else if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')
        {
            c++;
            i+=2;
        }
    }
   o c<<endl;

}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{ 

   solve_de_vai();
}
}