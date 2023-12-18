// Program to demonstrate copy constructor

#include <iostream>
using namespace std;

class Complex
{
  int real, imag;

public:
  Complex(int a, int b)
  {
    real = a;
    imag = b;
  }

  Complex(Complex &c) // copy constructor
  {
    real = c.real;
    imag = c.imag;
  }

  void showNumber()
  {
    cout << "Complex number is " << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  Complex c1(3, 21);
  c1.showNumber();

  Complex c2(c1);
  c2.showNumber();

  return 0;
}