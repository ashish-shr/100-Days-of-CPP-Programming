// Program to demonstrate pure virtual function and abstract class [1]

#include <iostream>

class Shape // abstract class
{
public:
  virtual void draw() = 0; // pure virtual function
  virtual ~Shape(){};
};

class TwoDimension : public Shape // abstract class
{
public:
  virtual ~TwoDimension(){};
};

class Circle : public TwoDimension // concrete class
{
public:
  virtual void draw() override
  {
    std::cout << "Drawing a circle..." << std::endl;
  }
  virtual ~Circle(){};
};

class Square : public TwoDimension // concrete class
{
public:
  virtual void draw() override
  {
    std::cout << "Drawing a square..." << std::endl;
  }
  virtual ~Square(){};
};

int main()
{
  Shape s;                                 // gives error
  TwoDimension t;                          // gives error
  Shape *sptr = new Shape();               // gives error
  TwoDimension *tptr = new TwoDimension(); // gives error
  return 0;
}