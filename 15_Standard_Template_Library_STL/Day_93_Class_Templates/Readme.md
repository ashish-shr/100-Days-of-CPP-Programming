# ⚡Class Templates

## Class Templates

- Similar to functions, classes can also be declared to operate on different data types.
- Such classes are called class templates.
- A class template specifies how individual classes can
  be constructed similar to normal class specification.
- These classes model a generic class which supports similar operations for different data types.

### Syntax

```cpp
//defining class template
template <class T>
class className
{
  private:
    T var;
    ... .. ...
  public:
    T functionName(T arg);
    ... .. ...
};
```

```cpp
//calling a class template
className <type> objectName;
```

```cpp
//defining member function outside of class
template <class T>
class className
{
  private:
    T var;
    ... .. ...
  public:
    T functionName(T arg);
    ... .. ...
};

template <class T>
T className <T>::functionName(T arg)
{
  //code
}
```

Here, `T` is the placeholder type name or return type, which will be specified when a class is instantiated. If necessary, we can define more than one generic data type using a
comma-separated list.

### Example

```cpp
// program to add two complex numbers using class template

#include <iostream>

// class template to add two complex numbers
template <class T>
class Complex
{
  T real, imag;

public:
  Complex() = default;

  Complex(T r, T i)
  {
    real = r;
    imag = i;
  }

  void displayComplex()
  {
    std::cout << real << " + " << imag << "i" << std::endl;
  }

  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }
};

int main()
{
  // sum of two complex numbers of int type
  Complex<int> i1(8, 7);
  Complex<int> i2(3, 21);
  Complex<int> resultInInt;
  resultInInt = i1 + i2;
  std::cout << "8 + 7i" << std::endl;
  std::cout << "3 + 21i" << std::endl;
  resultInInt.displayComplex();

  std::cout << std::endl;

  // sum of two complex numbers of float type
  Complex<float> f1(8.7f, 7.8f);
  Complex<float> f2(3.21f, 1.2f);
  Complex<float> resultInFloat;
  resultInFloat = f1 + f2;
  std::cout << "8.7 + 7.8i" << std::endl;
  std::cout << "3 + 1.2i" << std::endl;
  resultInFloat.displayComplex();

  return 0;
}
```

```
Output:
8 + 7i
3 + 21i
11 + 28i

8.7 + 7.8i
3 + 1.2i
11.91 + 9i
```

## Default arguments in class templates

- We can specify the default arguments in our class templates.
- While doing so, we can call the class template without specifying the datatype.
- And if, we do specify the datatype, then the default argument in our class template will be overwritten.
- The rules are same as specifying the default arguments in functions.

### Syntax

```cpp
//defining a class template with default argument
template <class T = int>
class className
{
  private:
    T var;
    ... .. ...
  public:
    T functionName(T arg);
    ... .. ...
};
```
