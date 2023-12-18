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