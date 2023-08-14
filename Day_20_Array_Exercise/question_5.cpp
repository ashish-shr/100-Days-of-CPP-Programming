// 5. C++ Program to Find Transpose of a Matrix of size 2x2

#include <iostream>
using namespace std;

int main()
{
  int mat[2][2];
  int row, col;
  cout << "Matrix? " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cin >> mat[row][col];
  }

  // transposing the matrix
  cout << "Transposed Matrix: " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cout << mat[col][row] << " ";
    cout << endl;
  }
  return 0;
}