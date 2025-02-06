#include<bits/stdc++.h>
using namespace std;
int partion(vector<int>&v,int l,int h)
{
    int pivot=v[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(i<h&&v[i]<=pivot)i++;
        while(j>l&&v[j]>=pivot)j--;
        if(i<j)swap(v[i],v[j]);
    }
    swap(v[l],v[j]);
    return j;
}
void quicksort(vector<int>&v,int l,int h)
{
    if(l<h)
    {
       int pivot=partion(v,l,h);
       quicksort(v,l,pivot-1);
       quicksort(v,pivot+1,h);

    }
    
}
int main()
{
int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)
{
    cin>>i;
}
quicksort(v,0,v.size()-1);

for(auto &i:v)
{
    cout<<i<<" ";
}
cout<<endl;



return 0;
}