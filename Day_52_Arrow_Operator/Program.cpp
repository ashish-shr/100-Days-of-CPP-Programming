// Program to demonstrate arrow operator

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  void getData(int x, int y)
  {
    real = x;
    imag = y;
  }

  void showData(void)
  {
    cout << "Real part: " << real << endl;
    cout << "Imaginary part: " << imag << endl;
  }
};

int main()
{
  // creating new object of type complex
  complex *cptr = new complex;

  // accessing members using arrow operator
  cptr->getData(3, 21); // same as (*cptr).getData(3, 21);
  cptr->showData();     // same as (*cptr).showData();

  return 0;
}