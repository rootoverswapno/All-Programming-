#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.begin(), v.end());
    int target;
    cin >> target;
    int left = 0, right = v.size() - 1;
    while (left < right)
    {
        int current = v[left] + v[right];
        if (current == target)
        {
            cout << v[left] << " " << v[right] << " sum=" << target << endl;
            left++;
            
        }
        else if (current < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return 0;
}