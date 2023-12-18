// Program to demonstrate parameterized constructor

#include <iostream>
using namespace std;

class Complex
{
  int real, imag;

public:
  Complex(int a, int b) // parameterized constructor
  {
    real = a;
    imag = b;
  }

  void showNumber()
  {
    cout << "Complex number is " << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  // implicit invoke
  Complex c1(8, 7);
  c1.showNumber();

  // explicit invoke
  Complex c2 = Complex(3, 21);
  c2.showNumber();

  return 0;
}