// program to read block data from a file

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
  std::ifstream file;
  file.open("student.dat", std::ios::binary);
  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  Student Bishal;

  // reading block data from a file
  file.seekg(0, std::ios::beg); // moves file pointer to beginning
  file.read((char *)&Bishal, sizeof(Bishal));

  Bishal.showInfo();
  file.close();
  return 0;
}