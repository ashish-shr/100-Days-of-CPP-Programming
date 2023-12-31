// catching all exceptions

#include <iostream>
using namespace std;

void exHandler(int test)
{
  try
  {
    if (test == 0)
      throw test; // throw int
    if (test == 1)
      throw 'a'; // throw char
    if (test == 2)
      throw 123.23; // throw double
  }
  catch (...)
  {
    // catch all exceptions
    cout << "Caught One!\n";
  }
}

int main()
{
  cout << "Start\n";
  exHandler(0);
  exHandler(1);
  exHandler(2);
  cout << "End";
  return 0;
}