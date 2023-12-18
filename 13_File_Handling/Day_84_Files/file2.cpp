// program to open a file and read a string, integer, and double

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream file;
  std::string line;
  int num;
  double total;

  file.open("test2.txt");
  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  file >> line >> num >> total;

  std::cout << line << std::endl;
  std::cout << num << std::endl;
  std::cout << total << std::endl;
  file.close();
  return 0;
}