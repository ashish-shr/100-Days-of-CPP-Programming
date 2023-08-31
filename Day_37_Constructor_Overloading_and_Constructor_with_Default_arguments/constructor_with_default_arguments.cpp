// Program to demonstrate Constructor with default arguments

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  complex(int r, int i = 0) // constructor with default arguments
  {
    real = r;
    imag = i;
  }

  void show(void)
  {
    cout << "Complex number is ";
    cout << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  complex c1(8);
  c1.show();
  complex c2(3, 21);
  c2.show();
  return 0;
}
