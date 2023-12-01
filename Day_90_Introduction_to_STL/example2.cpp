// simple example to reverse a vector using STL

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> v{8, 7, 3};
  std::reverse(v.begin(), v.end());

  for (auto elem : v)
  {
    std::cout << elem << std::endl;
  }

  return 0;
}