#include<bits/stdc++.h>
using namespace std;
int main()
{
// string str="12345";
// long long num=stoll(str);
// cout<<"Converted Number :"<<num<<endl;


//using Non Numeric Character 

string str = "123abc";
    size_t idx;
    long long num = stoll(str, &idx);
    cout << "Converted number: " << num << endl; 
    cout << "Unprocessed part: " << str.substr(idx) << endl;




return 0;
}