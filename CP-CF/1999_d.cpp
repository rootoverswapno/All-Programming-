#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
    string s, t;
    cin >> s >> t;
    int size_s = s.size();
    int size_tt = t.size();
    string res = "";
    int l = t.size(), r = 0;
    int ct = 0;

    for(int i=0;i<size_s;++i)
    {


        
        if(s[i]==t[ct]&&ct<l)
        {
           
            s[i]=t[ct];
            ct++;

        }

           if(s[i]=='?')
        {
            if(ct<l)
            {
                s[i]=t[ct];
                ct++;
            }
            else
            {
                s[i]='a';
            }
        }


       
       
    }

    if(ct<l)
    {

          cout<<"NO"<<endl;
        return;
       
    }
    else
    {
       cout<<"YES"<<endl;
        cout<<s<<endl;
        return;
    }

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}