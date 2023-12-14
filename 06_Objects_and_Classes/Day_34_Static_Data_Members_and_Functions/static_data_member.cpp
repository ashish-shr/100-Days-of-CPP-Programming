// Program to demonstrate static data member

#include <iostream>
using namespace std;

class student
{
public:
  static int id; // static data member declaration
};

int student::id; // static data member definition

int main()
{
  student s1, s2;
  s1.id = 3;
  s2.id = 8;
  cout << s1.id << endl;
  cout << s2.id << endl;
  return 0;
}