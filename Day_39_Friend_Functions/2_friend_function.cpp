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