#include<iostream>
using namespace std;

int main()
{
    float n,arr[100],sum=0,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum=sum+(arr[i]/100);
    }
  
   p=((sum/n)*100);
   cout<<p<<endl;

    return 0;
}