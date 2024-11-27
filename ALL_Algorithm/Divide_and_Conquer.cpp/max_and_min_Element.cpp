#include<bits/stdc++.h>
using namespace std;
pair<int,int>fminmax(vector<int>&arr,int lo,int hi)
{
    if(hi==lo)
    {
        return{arr[lo],arr[lo]};
    }
     
     if(hi==lo+1)
     {
        if(arr[lo]<arr[hi])
        {
            return{arr[lo],arr[hi]};
        }
        else
        {
            return{arr[hi],arr[lo]};
        }
     }

    int mid=lo+((hi-lo)>>1);
    pair<int,int>left= fminmax(arr,lo,mid);
    pair<int,int>right=fminmax(arr,mid+1,hi);

    int finalmin=min(left.first,right.first);
    int finalmax=max(left.second,right.second);

    return{finalmin,finalmax};

}
int main()
{
    vector<int> arr = {3, 5, 1, 9, 2, 8, -3, 7};
    pair<int, int> result = fminmax(arr, 0, arr.size() - 1);

     cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;


return 0;
}