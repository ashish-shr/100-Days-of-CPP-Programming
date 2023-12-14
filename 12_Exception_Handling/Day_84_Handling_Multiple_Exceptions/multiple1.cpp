// handling multiple exceptions

#include <iostream>

void test(int x)
{
  // handling multiple exceptions
  try
  {
    if (x == 0)
      throw 0;
    if (x == 1)
      throw 1.0;
  }
  catch (int &ex)
  {
    std::cout << "Caught Exception #" << ex << std::endl;
  }
  catch (double &ex)
  {
    std::cout << "Caught Exception #" << ex << std::endl;
  }
}

int main()
{
  test(0);
  test(1);
  return 0;
}