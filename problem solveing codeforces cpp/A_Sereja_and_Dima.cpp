#include<bits/stdc++.h>
using namespace std;

int main()
{
    
int n;
 cin>>n;
  int dima=0;
  int sereja=0;
 vector<int>v;
 for(int i=0;i<n;++i)
 {
    int x;
    cin>>x;
    v.push_back(x);
 }
 int a=0;
 int b=n-1;
 int c=0;
 while(a<=b)
 {
    if(c%2==0)
    {
        if(v[a]>v[b])
        {
            sereja+=v[a];
            a++;
        }
        else
        {
            sereja+=v[b];
            b--;
        }
    }
    else
    {
        
        if(v[a]>v[b])
        {
            dima+=v[a];
            a++;
        }
        else
        {
            dima+=v[b];
            b--;
        }
    }
    c++;
 }
 cout<<sereja<<" "<<dima<<endl;
    return 0;
}