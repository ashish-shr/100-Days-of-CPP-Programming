# ⚡Destructor in Inheritance

## Destructor in Derived Class

- Just like constructor in inheritance, we can have destructor in inheritance.
- In inheritance, the destructor is called in opposite manner to that of constructor.
- The destructor of base class implicitly bind with the destructor of derived class.
- In case of destructor, the base class destructor is bind with derived class destructor in the last line.
- So, the destructor of derived class is executed first and then the destructor of base class.

### Example

```cpp
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
```

```
Output:
Derived class destructor called...
Base class destructor called...
```
