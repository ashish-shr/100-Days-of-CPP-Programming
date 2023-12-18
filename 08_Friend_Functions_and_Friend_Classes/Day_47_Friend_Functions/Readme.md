# ⚡Friend Function in C++

- A friend function in C++ is a type of function that is used to grant permissions to access private and protected members of a class only.
- The keyword "friend" is used before the function to declare it as a friend function.
- Friend functions aren't class member functions. It is a type of keyword that is defined outside of a class but has access to the class's protected and private members.
- When two classes have to share members, we add the needed function as a friend to both classes to access the members of the class (secret and protected data).
- Friend functions have objects as arguments.
- It cannot access the member names directly and has to use dot membership operator and use an object name with the member name.

#### Friend function declaration

```cpp
    class className
    {
        ..........
        friend return_type functionName(arguments);
        ..........
    }
```

#### Friend function definition

```cpp
    return_type functionName(arguments)
    {
        ..........
        // Private and protected data of className can be accessed from
        // this function because it is a friend function of className.
        ..........
    }
```

## Programs

```cpp
// Program to demonstrate friend function

#include <iostream>
using namespace std;

class complex
{
  float real, imag;          // private data members
  friend void data(complex); // friend function declaration
};

void data(complex c) // friend function definition
{
  float r, i;
  cout << "Enter real and imaginary part: ";
  cin >> r >> i;
  c.real = r;
  c.imag = i;
  cout << "Complex number is " << c.real << "+" << c.imag << "i" << endl;
}

int main()
{
  complex c;
  data(c);
  return 0;
}
```

```
Output:
Enter real and imaginary part: 3 21
Complex number is 3+21i
```

```cpp
// Program to demonstrate friend function in multiple classes

#include <iostream>
using namespace std;

class complexB; // forward declaration

class complexA
{
  float real, imag;

public:
  void getA(void)
  {
    cout << "Enter real and imaginary part: ";
    cin >> real >> imag;
  }
  friend void addComplex(complexA, complexB); // friend function
};

class complexB
{
  float real, imag;

public:
  void getB(void)
  {
    cout << "Enter real and imaginary part: ";
    cin >> real >> imag;
  }
  friend void addComplex(complexA, complexB); // friend function
};

void addComplex(complexA c1, complexB c2) // friend function definition
{
  float real = c1.real + c2.real;
  float imag = c1.imag + c2.imag;
  cout << c1.real << "+" << c1.imag << "i" << endl;
  cout << c2.real << "+" << c2.imag << "i" << endl;
  cout << "------------------------" << endl;
  cout << real << "+" << imag << "i" << endl;
}

int main()
{
  complexA c1;
  c1.getA();
  complexB c2;
  c2.getB();
  addComplex(c1, c2);
  return 0;
}
```

```
Output:
Enter real and imaginary part: 3 21
Enter real and imaginary part: 8 7
3+21i
8+7i
------------------------
11+28i
```
