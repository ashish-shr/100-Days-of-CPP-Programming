// Program to make dynamic 1D array

#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Size: ";
  cin >> size;

  // making dynamic 1D array
  int *array = new int[size];

  // taking array elements
  for (int i = 0; i < size; i++)
  {
    cout << "Array[" << i << "]: ";
    cin >> array[i];
  }

  // printing array elements
  cout << endl;
  cout << "Array Elements:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Array[" << i << "]: " << array[i] << endl;
  }

  // deleting dynamic array
  delete array;
  array = nullptr;

  return 0;
}