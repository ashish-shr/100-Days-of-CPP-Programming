// program to write block data to a file

#include <iostream>
#include <fstream>
#include <cstring>

class Student
{
  int roll;
  char name[20];
  float gpa;

public:
  Student() = default;
  Student(int r, const char *n, float g)
  {
    roll = r;
    strcpy(name, n);
    gpa = g;
  }

  void showInfo()
  {
    std::cout << "Roll: " << roll << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
  }
};

int main()
{
  std::ofstream file;
  file.open("student.dat", std::ios::binary);
  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  Student Bishal(1, "Bishal Baniya", 3.90);

  // writing block data to a file
  file.write((char *)&Bishal, sizeof(Bishal));

  std::cout << "info added successfully" << std::endl;
  file.close();
  return 0;
}