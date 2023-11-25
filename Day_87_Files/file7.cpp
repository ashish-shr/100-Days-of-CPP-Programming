// program to append in a file

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ofstream file("test6.txt", std::ios::app);
  if (!file)
  {
    std::cerr << "error creating file" << std::endl;
    return 1;
  }
  std::string line;
  std::cout << "Enter something to write on a file: ";

  std::getline(std::cin, line);
  file << line << std::endl;

  file.close();
  return 0;
}