// Overloading new and delete operators globally

/*
Note: In general, overloading "new" and "delete" operators globally
for built-in types can work, but it's essential to be aware that the
behavior can vary, and it might not always be portable or consistent
across different environments.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// overloading new operator
void *operator new(size_t size)
{
  cout << "calling our overloaded new operator..." << endl;
  void *p = malloc(size);
  return p;
}

// overloading delete operator
void operator delete(void *p)
{
  cout << "calling our overloaded delete operator..." << endl;
  free(p);
}

int main()
{
  int *ptr = new int; // overloaded new operator is called
  delete (ptr);       // overloaded delete operator is called
  return 0;
}