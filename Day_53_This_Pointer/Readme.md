# ⚡this Pointer in C++

## this pointer

- "this" is a keyword that refers to the current instance of the class.
- "this" pointer is a pointer accessible only within the nonstatic member functions of a class, struct, or union type.
- "this" pointer gives address in the Hexadecimal format.
- "this" pointer can be used when local variable’s name is same as member’s name.
- "this" pointer helps to distinguish data members from local variables.
- "this" pointer can be used to pass current object as a parameter to another method.
- "this" pointer can be used to refer current class instance variable.
- "this" pointer can be used to declare indexers.
- "this" pointer points to the object for which the member function is called.
- Static member functions don't have a "this" pointer.

### Syntax

```cpp
//using arrow operator
this->member-identifier

//using dot and asterisk operator
(*this).member-identifier
```

### Example

```cpp
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
```

```
Output:
Address of Object: 0xfc3bbffb98
a: 3
b: 21
```

## Program

```cpp
// Program to store real and imaginary parts of complex number using this pointer

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int real, int imag)
  {
    this->real = real; //(*this).real = real;
    this->imag = imag; //(*this).imag = imag;
  }

  void showData(void)
  {
    cout << "Real Part: " << real << endl;
    cout << "Imaginary Part: " << imag << endl;
    cout << "Complex Number... " << endl;
    cout << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  complex c;
  c.getData(8, 7);
  c.showData();
  return 0;
}
```

```
Output:
Real Part: 8
Imaginary Part: 7
Complex Number...
8+7i
```
