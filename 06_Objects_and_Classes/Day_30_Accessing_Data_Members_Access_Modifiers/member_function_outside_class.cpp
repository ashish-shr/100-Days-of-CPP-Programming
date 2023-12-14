// Program to define member function outside of the class

#include <iostream>
using namespace std;

class student
{
public:
  int id;
  string name;
  void display();
};

// member function definition outside of class
void student::display()
{
  cout << "member function outside class" << endl;
}

int main()
{
  student Rahul;
  Rahul.display();
  return 0;
}