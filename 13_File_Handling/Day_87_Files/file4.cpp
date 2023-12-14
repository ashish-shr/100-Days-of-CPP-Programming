// program to read one line at a time from a file

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream file;
  file.open("test4.txt");

  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  std::string line;
  while (std::getline(file, line))
  {
    std::cout << line << std::endl;
  }
  file.close();
  return 0;
}