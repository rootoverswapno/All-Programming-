#include <iostream>
using namespace std;
void printbinary(int n)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}
int main()
{
    for (int i = 0; i < 8; ++i)
    {
        printbinary(i);
        if(i&1!=0)
        {
            cout<<"odd number"<<endl;
        }
        else
        {
            cout<<"even number"<<endl;
        }
    }
    

    return 0;
}