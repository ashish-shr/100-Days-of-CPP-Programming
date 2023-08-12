// the following loop will print upto 3 as 0 1 2 3.

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 5; i++)
  {
    if (i == 4)
    {
      break;
    }
    cout << i << " ";
  }
  return 0;
}