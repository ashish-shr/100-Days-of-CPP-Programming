// Program to demonstrate Hierarchial inheritance

#include <iostream>

// Base class
class Animal
{
public:
  void eat() const
  {
    std::cout << "Animal is eating" << std::endl;
  }
};

// Derived class 1
class Dog : public Animal
{
public:
  void bark() const
  {
    std::cout << "Dog is barking" << std::endl;
  }
};

// Derived class 2
class Cat : public Animal
{
public:
  void meow() const
  {
    std::cout << "Cat is meowing" << std::endl;
  }
};

int main()
{
  Dog myDog;
  Cat myCat;

  myDog.eat();  // Animal is eating
  myDog.bark(); // Dog is barking

  myCat.eat();  // Animal is eating
  myCat.meow(); // Cat is meowing

  return 0;
}
