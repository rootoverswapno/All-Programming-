#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>len;
    int a,b;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int x;
        cin>>x;
        len.insert(x);
    }
    cin>>b;
    for(int i=0;i<b;++i)
    {
        int y;
        cin>>y;
        len.insert(y);
    }
    int l=len.size();
    if(l==n)
    {
        cout<<"I become the guy."<<endl;
    }
else
{
  cout<<"Oh, my keyboard!"<<endl;  
}

    
    return 0;
}