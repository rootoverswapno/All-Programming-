#include<bits/stdc++.h>
#define swapno king of the world  
#define int long long 
using namespace std;

void solve()
{
      string sm;
      cin>>sm;
    int hour=stoi(sm.substr(0,2));
      string sp=sm.substr(3,2);
      string shift=" AM\n";
      if(hour>11){
        shift=" PM\n";
      }
      if(hour==0||hour==12){
        cout<<12<<":"<<sp<<shift;
      }
      else{
        if(hour%12<10){
            cout<<"0"<<hour%12<<":"<<sp<<shift;
        }
        else{
            cout<<hour%12<<":"<<sp<<shift;
        }
      }


}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{
solve();

}
}