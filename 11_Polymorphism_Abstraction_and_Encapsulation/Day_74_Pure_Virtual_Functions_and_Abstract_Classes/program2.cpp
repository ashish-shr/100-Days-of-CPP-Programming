// Program to demonstrate pure virtual function and abstract class [2]

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
  Shape *ptr1 = new Circle();
  ptr1->draw(); // Drawing a circle...
  Shape *ptr2 = new Square();
  ptr2->draw(); // Drawing a square...
  return 0;
}