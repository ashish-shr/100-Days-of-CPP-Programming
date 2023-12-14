// stack unwinding example [2]

#include <iostream>

void func_a();
void func_b();
void func_c();

void func_a()
{
  std::cout << "Starting func_a" << std::endl;
  func_b();
  std::cout << "Ending func_a" << std::endl;
}

void func_b()
{
  std::cout << "Starting func_b" << std::endl;
  func_c();
  std::cout << "Ending func_b" << std::endl;
}

void func_c()
{
  std::cout << "Starting func_c" << std::endl;
  throw 100;
  std::cout << "Ending func_c" << std::endl;
}

int main()
{
  std::cout << "Starting main" << std::endl;
  try
  {
    func_a();
  }
  catch (int &ex)
  {
    std::cout << "Caught error in main" << std::endl;
  }
  std::cout << "Finishing main" << std::endl;
  return 0;
}