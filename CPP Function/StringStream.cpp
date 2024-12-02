#include<bits/stdc++.h>
using namespace std;
int main()
{

string s="I love programming in C++";
stringstream ss(s);
string word;
vector<string>words;
//here work working like a variable with each input
//>> operator works extract data from the stream in to a variable;
while(ss>>word)
{
    words.push_back(word);
}
for(auto &i:words)
{
    cout<<i<<endl;
}
return 0;
}