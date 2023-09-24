// Program to demonstrate Single level inheritance

#include <iostream>
using namespace std;

class base // base class
{
protected:
  int firstNumber, secondNumber;

public:
  void getNumbers()
  {
    cout << "Enter first and second number: ";
    cin >> firstNumber >> secondNumber;
  }
};

class derive : public base // derived class
{
  int product;

public:
  void getProduct()
  {
    product = firstNumber * secondNumber;
    cout << "Product is " << product << endl;
  }
};

int main()
{
  derive d;
  d.getNumbers();
  d.getProduct();
  return 0;
}