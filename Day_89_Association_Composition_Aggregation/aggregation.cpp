// aggregation example

#include <iostream>
#include <string>

class Address
{
private:
  std::string city;

public:
  Address(const std::string &city)
      : city(city) {}

  void displayAddress() const
  {
    std::cout << city << std::endl;
  }
};

class Person
{
private:
  std::string name;
  Address address;

public:
  Person(const std::string &name, const Address &address)
      : name(name), address(address) {}

  void displayInfo() const
  {
    std::cout << "Name: " << name << std::endl;
    std::cout << "City: ";
    address.displayAddress();
  }
};

int main()
{
  Address johnsAddress("Anytown");

  Person john("John Doe", johnsAddress);

  john.displayInfo();

  return 0;
}
