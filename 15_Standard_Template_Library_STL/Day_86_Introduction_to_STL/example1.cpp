// simple example to sort a vector using STL

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> v{3, 2, 1};
  std::sort(v.begin(), v.end());

  for (auto elem : v)
  {
    std::cout << elem << std::endl;
  }

  return 0;
}