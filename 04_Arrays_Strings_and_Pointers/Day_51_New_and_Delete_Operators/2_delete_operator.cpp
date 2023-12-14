// Program to demonstrate delete operator

#include <iostream>
using namespace std;

int main()
{
  // declare an int pointer
  int *ptr;

  // dynamically allocate memory for an int variable
  ptr = new int;

  // assign value to the variable memory
  *ptr = 3;

  // print the value stored in memory
  cout << *ptr; // Output: 3

  // deallocate the memory
  delete ptr;

  return 0;
}