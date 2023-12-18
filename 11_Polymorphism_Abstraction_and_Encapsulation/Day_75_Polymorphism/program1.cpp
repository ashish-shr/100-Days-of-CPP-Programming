// Program to demonstrate compile-time polymorphism using function overloading

#include <iostream>
using namespace std;

class Add
{
public:
  // sum() with 2 parameters
  int sum(int num1, int num2)
  {
    return num1 + num2;
  }

  // sum() with 3 parameters
  int sum(int num1, int num2, int num3)
  {
    return num1 + num2 + num3;
  }
};

int main()
{
  Add obj;

  // This will call the first variant of the sum() function
  cout << "Output: " << obj.sum(10, 20) << endl;

  // This will call the second variant of the sum() function
  cout << "Output: " << obj.sum(11, 22, 33) << endl;

  return 0;
}