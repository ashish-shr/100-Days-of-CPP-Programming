// program to read one character at a time from a file

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream file;
  file.open("test4.txt");

  if (!file)
  {
    std::cerr << "problem opening file" << std::endl;
    return 1;
  }

  char c;
  while (file.get(c))
  {
    std::cout << c;
  }
  file.close();
  return 0;
}