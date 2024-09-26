#include<iostream>
using namespace std;
int main(){
  int p;
  cin>>p;
  while (p--){
int n;
cin>>n;
bool pos = false;
for(int i=2;i<=n;i++){
    if((n-1-i)%3!=0&&i%3!=0&&(n-1-i)!=1&&
       (n-i-1)!=i&&(n-1-i)>0){
        pos=true;
        cout<<"YES"<<endl;
        cout<<1<<" "<<i<<" "<<(n-1-i)<<endl;
        break;
       }
}
if(!pos){
    cout<<"NO"<<endl;
}
  }
return 0;
}