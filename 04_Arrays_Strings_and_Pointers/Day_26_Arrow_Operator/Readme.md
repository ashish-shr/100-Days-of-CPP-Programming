# ⚡Arrow Operator in C++

## Arrow Operator

- The -> (arrow) operator is used to access class, structure or union members using a pointer.
- The Dot(.) operator is used to normally access members of a class, structure or union.
- But, the Arrow(->) operator is used to access the members of the class, structure or union using pointers.
- Arrow (->) operator in C++ represents the same meaning which is done by the (\*) asterisk operator and dot(.) operator i.e. to dereference a pointer.

### Syntax

```cpp
//using arrow operator
pointer_variable->class_member_name;

//using dot and asterisk operator
(*pointer_variable).class_member_name;
```

### Example

```cpp
// Program to demonstrate arrow operator

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int x, int y)
  {
    real = x;
    imag = y;
  }

  void showData(void)
  {
    cout << "Real part: " << real << endl;
    cout << "Imaginary part: " << imag << endl;
  }
};

int main()
{
  // creating new object of type complex
  complex *cptr = new complex;

  // accessing members using arrow operator
  cptr->getData(3, 21); // same as (*cptr).getData(3, 21);
  cptr->showData();     // same as (*cptr).showData();

  return 0;
}
```

```
Output:
Real part: 3
Imaginary part: 21
```
