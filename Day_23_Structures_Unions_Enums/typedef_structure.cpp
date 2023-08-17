// C++ program to demonstrate Structures

#include <iostream>
using namespace std;

typedef struct
{
  int roll;
  string name;
} student;

int main()
{
  student s;
  // Assign values to members of student
  s.roll = 1;
  s.name = "Ashish Shrestha";

  // Print members of student
  cout << s.roll << "\n";
  cout << s.name << "\n";
  return 0;
}
