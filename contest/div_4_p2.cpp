#include<bits/stdc++.h>
#define swapno king of the world  
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
   int n;
   cin>>n;
   for(int i=0;i<n;++i)
   {
    char f='.';
    char s='#';
    int t1=2;
    if(i%2==0)
    {
        f='#';
        s='.';
    }
    while(t1--)
    {
        for(int j=0;j<n;++j)
        {
            int t2=2;
            while (t2--)
            {
                if(j%2==0)
                {
                    cout<<f;
                }
                else
                {
                    cout<<s;
                }
            }
            
        }
        cout<<endl;
    }

   }
}
int32_t main()
{
    
    int t;
    cin>>t;
while(t--)
{
solve_de();
//SWAPNO KING OF THE WORLD..
//NAM TO SUNA HI HOGA......
}
}