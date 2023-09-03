// Program to demonstrate Constructor Overloading

#include <iostream>
using namespace std;

class volume
{
  float length, breadth, height;

public:
  volume() // default constructor
  {
    cout << "default constructor called..." << endl;
    cout << "not defined" << endl;
  }

  volume(float l) // constructor with 1 argument
  {
    cout << "constructor with 1 argument called..." << endl;
    length = l;
    cout << "Volume of cube: " << length * length * length << endl;
  }

  volume(float l, float b, float h) // constructor with 3 arguments
  {
    cout << "constructor with 3 arguments called..." << endl;
    length = l, breadth = b, height = h;
    cout << "Volume of cuboid: " << length * breadth * height << endl;
  }
};

int main()
{
  volume v;               // default constructor will be invoked
  volume cube(3);         // constructor with 1 argument will be invoked
  volume cuboid(3, 2, 1); // constructor with 3 arguments will be invoked
  return 0;
}