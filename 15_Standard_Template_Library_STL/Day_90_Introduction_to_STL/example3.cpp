// simple example to calculate sum of vector elements using STL

#include <iostream>
#include <vector>
#include <numeric>

int main()
{
  int sum{};
  std::vector<int> v{3, 2, 1};
  sum = std::accumulate(v.begin(), v.end(), 0);

  std::cout << "Sum: " << sum << std::endl;

  return 0;
}