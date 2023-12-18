# ⚡Arrays Exercise

1. C++ Program to find largest and smallest element of an 1-D array.
2. C++ Program to sort an 1-D array in ascending order.
3. C++ Program to Add Two Matrix of size 2x2 Using Multi-dimensional Arrays
4. C++ Program to Multiply Two Matrix of size 2x2 and 2x3 Using Multi-dimensional Arrays
5. C++ Program to Find Transpose of a Matrix of size 2x2

## Programs

```cpp
// 1. C++ Program to find largest and smallest element of an 1-D array.

#include <iostream>
using namespace std;

#define MAX 10

int main()
{
  int elem[MAX], size;
  cout << "Size of array? ";
  cin >> size;
  for (int i = 0; i < size; i++)
    cin >> elem[i];

  // finding largest and smallest element
  int max = elem[0], min = elem[0];
  for (int i = 0; i < size; i++)
  {
    if (elem[i] > max)
      max = elem[i];
    if (elem[i] < min)
      min = elem[i];
  }
  cout << "Largest element: " << max << endl;
  cout << "Smallest element: " << min << endl;
  return 0;
}
```

```cpp
// 2. C++ Program to sort an 1-D array in ascending order.

#include <iostream>
using namespace std;

#define MAX 10

int main()
{
  int elem[MAX], size;
  cout << "Size of array? ";
  cin >> size;
  int i, j, tmp;
  for (i = 0; i < size; i++)
    cin >> elem[i];

  // bubble sort algorithm
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - i - 1; j++)
    {
      if (elem[j] > elem[j + 1])
      {
        tmp = elem[j];
        elem[j] = elem[j + 1];
        elem[j + 1] = tmp;
      }
    }
  }
  cout << "Sorted in ascending order: " << endl;
  for (i = 0; i < size; i++)
    cout << elem[i] << " ";
  return 0;
}
```

```cpp
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
```

```cpp
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
```

```cpp
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
```
