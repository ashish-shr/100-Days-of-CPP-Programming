# ⚡Passing Objects as arguments by Reference and by Pointer

## Passing Objects as arguments

- The objects of a class can be passed as arguments to member functions as well as nonmember functions either by value or by reference.
- Whenever an object of a class is passed to a member function of the same class, its data members can be accessed inside the function using the object name and the dot operator.

## Passing Objects by reference

```cpp
// Passing object by reference

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int r, int i);
  void addData(complex &c1, complex &c2); // pass by reference
  void showData();
};

void complex::getData(int r, int i)
{
  real = r;
  imag = i;
}

void complex::addData(complex &c1, complex &c2) // pass by reference
{
  // access by dot operator
  real = c1.real + c2.real;
  imag = c1.imag + c2.imag;
}

void complex::showData()
{
  cout << real << "+" << imag << "i" << endl;
}

int main()
{
  complex c1, c2, c3;
  c1.getData(1, 2);
  c1.showData();
  c2.getData(3, 4);
  c2.showData();
  c3.addData(c1, c2);
  c3.showData();
  return 0;
}
```

## Passing Objects by Pointer

```cpp
// Passing object by pointer

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int r, int i);
  void addData(complex *c1, complex *c2); // pass by pointer
  void showData();
};

void complex::getData(int r, int i)
{
  real = r;
  imag = i;
}

void complex::addData(complex *c1, complex *c2) // pass by pointer
{
  // access using arrow operator
  real = c1->real + c2->real;
  imag = c1->imag + c2->imag;
}

void complex::showData()
{
  cout << real << "+" << imag << "i" << endl;
}

int main()
{
  complex c1, c2, c3;
  c1.getData(1, 2);
  c1.showData();
  c2.getData(3, 4);
  c2.showData();
  c3.addData(&c1, &c2);
  c3.showData();
  return 0;
}
```
