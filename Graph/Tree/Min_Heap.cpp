#include<bits/stdc++.h>
using namespace std;
void heapifyup(vector<int>&heap,int i)
{
    int parent=(i-1)/2;
    if(i>0&&heap[i]<heap[parent]){
        swap(heap[i],heap[parent]);
        heapifyup(heap,parent);
    }
}
void insert(vector<int>&heap,int val)
{
    heap.push_back(val);
    heapifyup(heap,heap.size()-1);
}
int main()
{
      vector<int>heap;
      
    insert(heap, 50);
    insert(heap, 30);
    insert(heap, 40);
    // insert(heap, 10);
    // insert(heap, 20);
    // insert(heap, 15);
    //  insert(heap, 60);

    cout<<"Min heap : ";
    for(auto &i:heap)
    {
        cout<<i<<" ";
    }
    cout<<endl;



return 0;
}