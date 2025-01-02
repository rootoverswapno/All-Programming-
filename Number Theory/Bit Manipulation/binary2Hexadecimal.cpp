#include <bits/stdc++.h>
using namespace std;

string convert2Hex(string &s)
{

    unordered_map<string, char> b2h = {
        {"0000", '0'}, {"0001", '1'}, 
        {"0010", '2'}, {"0011", '3'},
        {"0100", '4'}, {"0101", '5'},
        {"0110", '6'}, {"0111", '7'},
        {"1000", '8'}, {"1001", '9'},
        {"1010", 'a'}, {"1011", 'b'},
        {"1100", 'c'}, {"1101", 'd'},
        {"1110", 'e'}, {"1111", 'f'}};

   string st=s;
   string res="";
   while(st.size()%4!=0)
   {
    st='0'+st;
   }
   for(size_t i=0;i<st.size();i+=4)
   {
      string str=st.substr(i,4);
      res+=b2h[str];

   }
   return res;
}

void binary(int num)
{
    string s;
    while(num!=0)
    {
        if(num%2==0)
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
        num/=2;
    }
    reverse(s.begin(),s.end());
    string res = convert2Hex(s);

}
int main()
{

    int num;
    cin>>num;
     binary()

    string s;
    cin >> s;
   
    cout << res << endl;

    return 0;
}