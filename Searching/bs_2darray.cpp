#include <bits/stdc++.h>
using namespace std;
pair<int, int> searchmatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    if (n == 0)
    {
        return {-1, -1};
    }
    int m = matrix[0].size();
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return {row, col};
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17},
    };
    int target = 5;
    pair<int, int> result = searchmatrix(matrix, target);
    if (result.first != -1)
    {
        cout << "Element found at position (" << result.first << ", " << result.second << ")" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}