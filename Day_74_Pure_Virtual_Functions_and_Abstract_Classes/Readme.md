# ⚡Pure Virtual Functions and Abstract Classes

## Abstract Classes

- Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.
- We cannot create objects of abstract classes.

## Pure Virtual Functions

- A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, otherwise, the derived class will also become an abstract class.
- A pure virtual function is declared by assigning 0 in the declaration.

### Syntax

```cpp
class Base
{
public:
    . . .
    // pure virtual function
    virtual returnType function() = 0;
    . . .
};
```

## Points to Remember

- A class is abstract if it has at least one pure virtual function.
- We can have pointers and references of abstract class type.
- If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.
- An abstract class can have constructors.
- An abstract class in C++ can also be defined using struct keyword.

### Examples

```cpp
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
```

```bash
Output:
program1.cpp: In function 'int main()':
program1.cpp:40:9: error: cannot declare variable 's' to be of abstract type 'Shape'
   40 |   Shape s;                                 // gives error
      |         ^
program1.cpp:5:7: note:   because the following virtual functions are pure within 'Shape':
    5 | class Shape // abstract class
      |       ^~~~~
program1.cpp:8:16: note:     'virtual void Shape::draw()'
    8 |   virtual void draw() = 0; // pure virtual function
      |                ^~~~
program1.cpp:41:16: error: cannot declare variable 't' to be of abstract type 'TwoDimensio
'
   41 |   TwoDimension t;                          // gives error
      |                ^
program1.cpp:12:7: note:   because the following virtual functions are pure within 'TwoDimension':
   12 | class TwoDimension : public Shape // abstract class
      |       ^~~~~~~~~~~~
program1.cpp:8:16: note:     'virtual void Shape::draw()'
    8 |   virtual void draw() = 0; // pure virtual function
      |                ^~~~
program1.cpp:42:27: error: invalid new-expression of abstract class type 'Shape'
   42 |   Shape *sptr = new Shape();               // gives error
      |                           ^
program1.cpp:43:41: error: invalid new-expression of abstract class type 'TwoDimension'
   43 |   TwoDimension *tptr = new TwoDimension(); // gives error
      |
```

```cpp
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
  ptr1->draw();
  Shape *ptr2 = new Square();
  ptr2->draw();
  return 0;
}
```

```
Output:
Drawing a circle...
Drawing a square...
```
