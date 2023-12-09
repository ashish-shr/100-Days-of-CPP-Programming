// program to demonstrate array functions

#include <iostream>
#include <array>
using namespace std;

int main()
{
  array<int, 5> arr{1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  cout << "Size of array is " << arr.size() << endl;
  cout << "First element of array is " << arr.front() << endl;
  cout << "Last element of array is " << arr.back() << endl;
  cout << "Second element of array is " << arr.at(1) << endl;
  cout << "First element of array using data method is " << *(arr.data()) << endl;
  arr.fill(10);

  cout << "The new array is ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  if (arr.empty() == false)
  {
    cout << "array is not empty!";
  }

  return 0;
}