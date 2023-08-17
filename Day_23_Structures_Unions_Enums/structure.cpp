// C++ program to demonstrate Structures

#include <iostream>
using namespace std;

struct student
{
  int roll;
  string name;
};

int main()
{
  struct student s;
  // Assign values to members of student
  s.roll = 1;
  s.name = "Ashish Shrestha";

  // Print members of student
  cout << s.roll << "\n";
  cout << s.name << "\n";
  return 0;
}
