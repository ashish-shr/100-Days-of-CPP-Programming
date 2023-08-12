// the following loop will print upto 7 skipping the number 4 as 0 1 2 3 5 6 7.

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 8; i++)
  {
    if (i == 4)
    {
      continue;
    }
    cout << i << " ";
  }
  return 0;
}