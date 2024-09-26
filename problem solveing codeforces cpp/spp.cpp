#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int n;

  cout<< "Please enter an odd integer: ";
  cin>>n;

  int MagicSquare[n][n];


  int newRow,
  newCol;

  // Set the indices for the middle of the bottom i
  int i =0 ;
  int j= n / 2;

  // Fill each element of the array using the magic array
  for ( int value = 1; value <= n*n; value++ )
  {
     MagicSquare[i][j] = value;
     // Find the next cell, wrapping around if necessary.
     newRow = (i + 1) % n;
     newCol = (j + 1) % n;
     // If the cell is empty, remember those indices for the
     // next assignment.
     if ( MagicSquare[newRow][newCol] == 0 )
     {
        i = newRow;
        j = newCol;
     }
     else
     {
        // The cell was full. Use the cell above the previous one.
        i = (i - 1 + n) % n;
     }

  }


  for(int x=0; x<n; x++)
  {
     for(int y=0; y<n; y++)
         cout << MagicSquare[x][y]<<" ";
     cout << endl;
  }
}