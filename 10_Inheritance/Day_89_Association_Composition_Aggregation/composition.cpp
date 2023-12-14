// composition example

#include <iostream>

class Engine // child
{
public:
  int power;
};

class Car // parent
{
public:
  Engine e; // class Engine object as a member variable of class Car
  std::string company;
  std::string color;
  void showDetails()
  {
    std::cout << "Company: " << company << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Engine horse power: " << e.power << std::endl;
  }
};

int main()
{
  Car c;
  c.company = "BMW";
  c.color = "Black";
  c.e.power = 550;
  c.showDetails();
  return 0;
}