#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int arr[MAX];
int top=-1;
void printstack(){
    cout<<"Stack: ";
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void push(){
    if(top<MAX){ 
        int x;
        cout<<"Enter Element: ";
        cin>>x;
        arr[++top]=x;
    }
    else cout<<"Overflow\n";
    
}

void pop(){
    if(top>-1)
        top--;
    else
        cout<<"Underflow";
}
void menufunc(){
    cout<<"Enter your choich\n1.Push\n2.Pop\n3.exit\n";
}

int main(){
    while(true){
    system("cls");
    printstack();
    menufunc();
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
        push();
        printstack();
        menufunc();

        break;
    case 2:
        pop();
        printstack();
        menufunc();
        break;
    case 3:
        exit(0);

        break;
    default:
        break;
    }
    }

}