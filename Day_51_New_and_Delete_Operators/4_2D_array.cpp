// Program to make dynamic 2D array

#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  cout << "Rows and Columns: ";
  cin >> rows >> cols;

  // making 2D dynamic array
  int **array = new int *[rows];
  for (int i = 0; i < rows; i++)
  {
    array[i] = new int[cols];
  }

  // taking array elements
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "Array[" << i << "]";
      cout << "[" << j << "]: ";
      cin >> array[i][j];
    }
  }

  // printing array elements
  cout << endl;
  cout << "Array Elements:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "Array[" << i << "]";
      cout << "[" << j << "]: ";
      cout << array[i][j] << endl;
    }
  }

  // deleting dynamic array
  for (int i = 0; i < rows; i++)
  {
    delete[] array[i];
  }
  delete[] array;
  array = nullptr;

  return 0;
}