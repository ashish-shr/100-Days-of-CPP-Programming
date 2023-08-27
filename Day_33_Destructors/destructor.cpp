// Program to demonstrate destructor

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

  void showData()
  {
    cout << "Complex number is " << real << "+" << imag << "i" << endl;
  }

  // destructor definition
  ~Complex()
  {
    cout << "Destructor is called..." << endl;
  }
};

int main()
{
  Complex c1(8, 7);
  c1.showData();
  Complex c2(8, 7);
  c2.showData();
  return 0;
}

/*
output:
8+7i
8+7i
Destructor is called...
Destructor is called...
*/