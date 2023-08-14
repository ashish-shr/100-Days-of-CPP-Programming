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