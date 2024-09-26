#include<iostream>
using namespace std;
class swapno{
    public:
    string name;
    int roll;
    float result;
    void func(string str, int i, float j){
        name=str;
        roll=i;
        result=j;
    }
    void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"ROLL:"<<roll<<endl;
        cout<<"RESULT:"<<result<<endl;
    }
}; 
int main(){
    swapno polash;
    polash.func("Swapnomoy Biswas",220132,3.55);
    polash.display();
}