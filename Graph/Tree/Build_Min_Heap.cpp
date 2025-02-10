#include<bits/stdc++.h>
using namespace std;
void heapifyDown(vector<int>&arr,int i,int size)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<size&&arr[left]<arr[largest])
    {
        largest=left;
    }
    if(right<size&&arr[right]<arr[largest])
    {
        largest=right;
    }

    if(i!=largest)
    {
        swap(arr[i],arr[largest]);
        heapifyDown(arr,largest,size);
    }
}
void buildMaxHeap(vector<int>&arr)
{
    int n=arr.size();
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapifyDown(arr,i,n);
    }
}
//Function to print the heap
void printheap(vector<int>&arr)
{
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    
    vector<int>arr={10,20,15,30,40};
    cout<<"Original Array : ";
    printheap(arr);
    buildMaxHeap(arr);
     printheap(arr);


return 0;
}