// Program to demonstrate default constructor

#include <iostream>
using namespace std;

class Complex
{
  int real, imag;

public:
  Complex() // default constructor
  {
    real = 0;
    imag = 0;
  }

  void showNumber()
  {
    cout << "Complex number is " << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  Complex c;
  c.showNumber();
  return 0;
}