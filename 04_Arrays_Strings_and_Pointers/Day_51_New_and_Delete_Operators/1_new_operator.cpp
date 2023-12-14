// Program to demonstrate new operator

#include <iostream>
using namespace std;

int main()
{
  // declare an int pointer
  int *ptr;

  // dynamically allocate memory using the new keyword
  ptr = new int;

  // assign value to allocated memory
  *ptr = 3;

  return 0;
}