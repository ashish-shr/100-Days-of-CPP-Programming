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