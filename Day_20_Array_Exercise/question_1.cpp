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