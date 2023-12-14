// 3. C++ Program to Add Two Matrix of size 2x2 Using Multi-dimensional Arrays

#include <iostream>
using namespace std;

int main()
{
  int matA[2][2], matB[2][2], sum[2][2];
  int row, col;
  cout << "Matrix A? " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cin >> matA[row][col];
  }
  cout << "Matrix B? " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cin >> matB[row][col];
  }

  // adding two matrices
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      sum[row][col] = matA[row][col] + matB[row][col];
  }
  cout << "Matrix after addition: " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cout << sum[row][col] << " ";
    cout << endl;
  }
  return 0;
}