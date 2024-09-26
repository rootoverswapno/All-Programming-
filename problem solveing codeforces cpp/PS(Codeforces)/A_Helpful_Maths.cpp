#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int j=0;j<s.size();j+=2)
    {

        for(int i=0;i<s.size()-1;i+=2)
        {
            if(s[i]>s[i+2])
            {
                swap(s[i],s[i+2]);
            }
        }
    }
        cout<<s<<endl;
    
    return 0;
}