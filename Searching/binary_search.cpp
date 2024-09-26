#include <bits/stdc++.h>
using namespace std;
void binarysearch1(vector<int> &v, int k1, int t)
{
    int high = t - 1;
    int low = 0;
    int mid;
    while (low <= high)
    {
        mid = ((low + high) / 2);
        if (v[mid]==k1)
        {
            cout << " position is : " << mid << endl;
            break;
        }
        if (v[mid] < k1)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "Number is not found " << endl;
    }
}
int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int k;
    cout << "Enter searching number :";
    cin >> k;
    binarysearch1(v, k, n);
    return 0;
}