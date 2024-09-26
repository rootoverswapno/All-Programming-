#include <bits/stdc++.h>
using namespace std;
int lenght(int arr[], int n, int x)
{
    int minlen = n + 1;
    for (int i = 0; i < n; ++i)
    {
        int maxsum = arr[i];
        if (maxsum > x)
            return 1;
        for (int j = i + 1; j < n; ++j)
        {
            maxsum += arr[j];
            if (maxsum > x && (j - i + 1) < minlen)
            {
                minlen = (j - i + 1);
            }
        }
    }
    return minlen;
}
int main()
{

    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 51;
    cout << lenght(arr, n, x) << endl;

    return 0;
}