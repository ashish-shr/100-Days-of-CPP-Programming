// program to copy file using getline

#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream original("original.txt");
  std::ofstream copied("copied.txt");

  if (!original || !copied)
  {
    std::cerr << "error opening file" << std::endl;
    return 1;
  }

  std::string line;
  while (std::getline(original, line))
  {
    copied << line << std::endl;
  }

  std::cout << "file copied successfully" << std::endl;
  original.close();
  copied.close();

  return 0;
}