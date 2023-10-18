// Program to demonstrate destructor in inheritance

#include <iostream>
using namespace std;

class BaseClass
{
public:
  ~BaseClass() // destructor
  {
    cout << "Base class destructor called..." << endl;
  }
};

class DerivedClass : public BaseClass
{
public:
  ~DerivedClass() // destructor
  {
    cout << "Derived class destructor called..." << endl;
  }
};

int main()
{
  DerivedClass object;
  return 0;
}