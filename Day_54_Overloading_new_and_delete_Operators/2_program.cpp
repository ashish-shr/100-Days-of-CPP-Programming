// Overloading new and delete operators for specific class

#include <iostream>
#include <cstdlib>
using namespace std;

class test
{
public:
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
};

int main()
{
  test *optr = new test; // overloaded new operator is called
  delete (optr);         // overloaded delete operator is called
  return 0;
}