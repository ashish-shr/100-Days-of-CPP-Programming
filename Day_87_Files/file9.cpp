// program to copy file using get() and put()

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream original("original.txt");
  std::ofstream copied("copied.txt");

  if (!original || !copied)
  {
    std::cerr << "error opening file" << std::endl;
    return 1;
  }

  char c;
  while (original.get(c))
  {
    copied.put(c);
  }

  std::cout << "file copied successfully" << std::endl;
  original.close();
  copied.close();

  return 0;
}