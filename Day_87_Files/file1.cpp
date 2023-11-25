// program to open a file

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream file;
  file.open("test1.txt");

  if (!file) // if test.txt is not found
  {
    std::cerr << "problem opening file" << std::endl;
    return 1; // exits the program
  }

  std::cout << "file is opened" << std::endl;
  file.close();
  return 0;
}