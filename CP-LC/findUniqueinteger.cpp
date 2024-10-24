#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &num:v)
    {
        cin>>num;
    }
    int uni=0;
    for(int i:v)
    {
        uni=uni^i;
    }
    cout<<uni<<endl;
   



return 0;
}