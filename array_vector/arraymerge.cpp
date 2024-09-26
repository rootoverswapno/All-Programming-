#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int arr1[]={-5,3,6,12,15};
int arr2[]={-12,-10,-6,-3,4,10};
  int i=sizeof(arr1)/sizeof(arr1[0]);
  int j=sizeof(arr2)/sizeof(arr2[0]);
  int arr3[i+j];
   int l=i+j;
   
   for(int k=0;k<i;++k)
   {
    arr3[k]=arr1[k];
   } 
   int a=0;
   for(int k=i;k<l;++k)
   {
    arr3[k]=arr2[a++];
   }
    for(int m=0;m<l;++m)
    {
        cout<<arr3[m]<<" ";
    }
    sort(arr3,arr3+l);
    cout<<endl;

   for(int m=0;m<l;++m)
    {
        cout<<arr3[m]<<" ";
    }
    */
   int n,m;
   cin>>n>>m;
   int arr1[n],arr2[m];
   for(int i=0,j=0;i<n,j<m;++i,++j)
   {
    cin>>arr1[i]>>arr2[j];
   }
   for(int i=0,j=0;i<n,j<m;++i,++j)
   {
    cout<<arr1[i]<<"  "<<arr2[j]<<endl;
   }
   int arr3[n+m];
   for(int k=0;k<n;++k)
   {
    arr3[k]=arr1[k];
   }
   int a=0;
    for(int k=n;k<n+m;++k)
   {
    arr3[k]=arr2[a++];
   }
   for(int k=0;k<n+m;++k)
   {
    cout<<arr3[k]<<" ";
   }
   sort(arr3,arr3+n+m);
   cout<<endl;
   for(int k=0;k<n+m;++k)
   {
    cout<<arr3[k]<<" ";
   }
   

    return 0;
}