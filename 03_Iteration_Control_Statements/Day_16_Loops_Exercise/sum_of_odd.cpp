// 1. Calculate sum of odd integers from 1 to 15 (inclusive) using for loop.

#include <iostream>
using namespace std;

int main()
{
  int sum;
  for (int i = 1; i <= 15; i++)
  {
    if ((i % 2) != 0)
      sum = sum + i;
  }
  cout << "Sum: " << sum;
  return 0;
}
