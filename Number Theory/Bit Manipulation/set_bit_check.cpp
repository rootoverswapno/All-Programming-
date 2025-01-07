#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=13;

    //use left shift operator
    if(n&(1<<0))
     cout<<"Set bit"<<endl;
    else
     cout<<"NOT set"<<endl;

    //use right shift operator

    if(1&(n>>1))
    cout<<"Set bit "<<endl;
    else
    cout<<"Not set"<<endl;


   
    


return 0;
}