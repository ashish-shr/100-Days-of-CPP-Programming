// program to add two complex numbers using class template

#include <iostream>

// class template to add two complex numbers
template <class T>
class Complex
{
  T real, imag;

public:
  Complex() = default;

  Complex(T r, T i)
  {
    real = r;
    imag = i;
  }

  void displayComplex()
  {
    std::cout << real << " + " << imag << "i" << std::endl;
  }

  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }
};

int main()
{
  // sum of two complex numbers of int type
  Complex<int> i1(8, 7);
  Complex<int> i2(3, 21);
  Complex<int> resultInInt;
  resultInInt = i1 + i2;
  std::cout << "8 + 7i" << std::endl;
  std::cout << "3 + 21i" << std::endl;
  resultInInt.displayComplex();

  std::cout << std::endl;

  // sum of two complex numbers of float type
  Complex<float> f1(8.7f, 7.8f);
  Complex<float> f2(3.21f, 1.2f);
  Complex<float> resultInFloat;
  resultInFloat = f1 + f2;
  std::cout << "8.7 + 7.8i" << std::endl;
  std::cout << "3 + 1.2i" << std::endl;
  resultInFloat.displayComplex();

  return 0;
}