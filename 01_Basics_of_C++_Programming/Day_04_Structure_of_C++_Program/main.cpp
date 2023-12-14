// Author: Ashish Shrestha
/*
Written on 29th July 2022
Program to demonstrate basic structure of C++ program
*/

#include <iostream>
#define PI 3.14

int rad = 2;
void area();

class myClass
{
public:
  int a;
  void display()
  {
    std::cout << "Inside of class" << std::endl;
  }
};

int main()
{
  myClass m;
  m.a = 90;
  m.display();
  area();
  std::cout << "Hello World" << std::endl;
  std::cout << m.a << std::endl;
  return 0;
}

void area()
{
  float area;
  area = PI * rad * rad;
  std::cout << area << std::endl;
}