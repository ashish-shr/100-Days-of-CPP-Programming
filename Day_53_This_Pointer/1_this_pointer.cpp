// Program to demonstrate this pointer

#include <iostream>
using namespace std;

class test
{
  int a, b;

public:
  void show(void)
  {
    a = 3;
    b = 21;

    // returns address of current object
    cout << "Address of Object: " << this << endl;

    // returns value of a for current object
    cout << "a: " << this->a << endl;

    // returns value of b for current object
    cout << "b: " << this->b << endl;
  }
};

int main()
{
  test t;
  t.show();
  return 0;
}