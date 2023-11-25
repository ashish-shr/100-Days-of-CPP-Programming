// program to open a file and read a string, integer, and double in multiple lines

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream file;
  std::string name;
  int num;
  double total;

  file.open("test3.txt");
  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  // eof => checks for the end of file
  while (!file.eof())
  {
    file >> name >> num >> total;
    std::cout << name << " " << num << " " << total << std::endl;
  }
  file.close();
  return 0;
}
