// the following loop will print upto 4 skipping the number 4 as 0 1 2 3 5.

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 5; i++)
  {
    if (i == 4)
    {
      continue;
    }
    cout << i << " ";
  }
  return 0;
}