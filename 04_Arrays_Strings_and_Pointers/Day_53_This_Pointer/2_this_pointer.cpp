// Program to store real and imaginary parts of complex number using this pointer

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int real, int imag)
  {
    this->real = real; //(*this).real = real;
    this->imag = imag; //(*this).imag = imag;
  }

  void showData(void)
  {
    cout << "Real Part: " << real << endl;
    cout << "Imaginary Part: " << imag << endl;
    cout << "Complex Number... " << endl;
    cout << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  complex c;
  c.getData(8, 7);
  c.showData();
  return 0;
}