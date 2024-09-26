#include <iostream>
using namespace std;
int func(int n)
{
   if(n==0)
   return 1;
   return func(n-1)*n;
  
}
int main()
{
    int x;
    cin >> x;
   cout<< func(x);

    
    return 0;
}
//calculate time complexicity
//number of function calls -> n
//what is the complexity of each function->0(1)
//0(n)