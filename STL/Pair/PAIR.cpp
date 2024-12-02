#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
     pair<int,string>p;
    //  p=make_pair(2,"abc");
    p={2,"abcd"};
    pair<int,string>&p1=p;
    p1.first=3;
    p1.second="mno"; 
     cout<<p.first<<" "<<p.second<<endl;

     cout<<endl;
     int a[]={1,2,3};
     int b[]={4,5,6};
     pair<int,int>p_array[3];
     p_array[0]={1,4};
     p_array[1]={2,5};
     p_array[2]={3,6};
     swap(p_array[0],p_array[2]);
     for(int i=0;i<3;++i)
     {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

     }
     cout<<endl;*/
     pair<int,int>p1[3];
     for(int i=0;i<3;++i)
     {
        cin>>p1[i].first>>p1[i].second;
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
     }
    
    return 0;
}