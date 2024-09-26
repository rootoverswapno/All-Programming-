
#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Function to generate a list of
// m random non-negative integers
// whose sum is n
void randomList(int m, int n)
{
 
    // Create an array of size m where
    // every element is initialized to 0
    int arr[m] = { 0 };
    srand(time(0));
 
    // To make the sum of the final list as n
    for (int i = 0; i < n; i++) {
 
        // Increment any random element
        // from the array by 1
        arr[rand() % m]++;
    }
 
    // Print the generated list
    printArr(arr, m);
}
 
int main()
{
    int m = 4, n = 8;
 
    randomList(m, n);
 
    return 0;
}