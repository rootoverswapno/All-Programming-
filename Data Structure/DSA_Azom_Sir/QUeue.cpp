#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
class QUEUE
{
private:
    int f = 0, r = -1, maxSize;
    vector<int> qu;
public:
    QUEUE(int m)
    {
        maxSize = m;
    }
    void enqueue(int a)
    {
        if ((r+1) < maxSize)
        {
            r++;
            qu.push_back(a);
        }
        else
        {
            cout<<"Overflow of queue"<<endl;
        }
    }
    void dequeue()
    {
        if (r >= 0 && f <= r)
        {
            f++;
            //qu.erase(qu.begin());
        }
        else
        {
            cout<<"Queue is empty, dequeue is not possible"<<endl;
        }
    }
    int peek()
    {
        if (f <= r)
        {
            return qu[f];
        }
        else
        {
            cout<<"Empty queue, no front element"<<endl;
        }
    }
    void printQueue()
    {
        for (int i = f; i <= r; i++)
        {
            cout<<qu[i]<<" ";
        }
        cout<<endl;
    }
};

void printMenue()
{
    cout<<"01. enqueue"<<endl;
    cout<<"02. dequeue"<<endl;
    cout<<"03. peek"<<endl;
    cout<<"04. Exit"<<endl;
}

int main()
{
    int mx;
    cout<<"Enter maximum capacity of queue"<<endl;
    cin>>mx;
    QUEUE q(mx);

    while (true)
    {
        int choice;
        q.printQueue();
        printMenue();
        cin>>choice;
        if (choice == 1)
        {
            int d;
            cout<<"Enter data to enqueue"<<endl;
            cin>>d;
            q.enqueue(d);
        }
        else if (choice == 2)
        {
            q.dequeue();
        }
        else if (choice == 3)
        {
            cout<<"Current front element is : "<<q.peek()<<endl;
        }
        else if (choice == 4)
        {
            return 0;
        }
        else
        {
            cout<<"Invalid input..."<<endl;
        }
    }
    

    // q.enqueue(4);
    // q.enqueue(5);
    // q.enqueue(2);
    // q.enqueue(1);
    // cout<<q.peek()<<endl;
    // q.dequeue();
    // cout<<q.peek()<<endl;
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // cout<<q.peek()<<endl;
    // q.printQueue();
    return 0;
}