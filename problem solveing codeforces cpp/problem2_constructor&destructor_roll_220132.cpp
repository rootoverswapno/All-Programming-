#include<iostream>
using namespace std;
class swapno{
    public:
    string name;
    int roll;
    float result;
    swapno(string str, int i, float j){
        name=str;
        roll=i;
        result=j;
    }
    ~swapno(){
        cout<<"NAME:"<<name<<endl;
        cout<<"ROLL:"<<roll<<endl;
        cout<<"RESULT:"<<result<<endl;
    }
};
int main(){
     swapno roll32("Swapnomoy Biswas",220132,3.55);  
    return 0;
}