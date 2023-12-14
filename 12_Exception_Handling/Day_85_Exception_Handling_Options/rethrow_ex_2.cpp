// rethrowing an exception

#include <iostream>
using namespace std;

void exHandler()
{
  try
  {
    throw "hello"; // throw a char *
  }
  catch (const char *)
  {
    // catch a char *
    cout << "Caught char * inside exHandler\n";
    throw; // rethrow char * out of function
  }
}

int main()
{
  cout << "Start\n";
  try
  {
    exHandler();
  }
  catch (const char *)
  {
    cout << "Caught char * inside main\n";
  }
  cout << "End";
  return 0;
}