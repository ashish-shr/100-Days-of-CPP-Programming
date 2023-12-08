// program to print vector elements using an iterator

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  std::vector<int> v{3, 2, 1, 8, 7};

  vector<int>::iterator itr;

  for (itr = v.begin(); itr != v.end(); itr++)
  {
    std::cout << *itr << " ";
  }
  return 0;
}
