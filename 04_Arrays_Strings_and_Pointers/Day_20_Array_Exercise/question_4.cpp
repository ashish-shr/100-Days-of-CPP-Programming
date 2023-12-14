// 4. C++ Program to Multiply Two Matrix of size 2x2 and 2x3 Using Multi-dimensional Arrays

#include <iostream>
using namespace std;

int main()
{
  int matA[2][2], matB[2][3], prod[2][3], sum = 0;
  int row, col, k;
  cout << "Matrix A? " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 2; col++)
      cin >> matA[row][col];
  }
  cout << "Matrix B? " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
      cin >> matB[row][col];
  }

  // multiplying two matrices
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      sum = 0;
      for (k = 0; k < 2; k++)
      {
        sum = sum + matA[row][k] * matB[k][col];
      }
      prod[row][col] = sum;
    }
  }
  cout << "Matrix after multiplication: " << endl;
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
      cout << prod[row][col] << " ";
    cout << endl;
  }
  return 0;
}