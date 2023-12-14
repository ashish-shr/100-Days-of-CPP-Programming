# ⚡Handling Multiple Exceptions

- It is possible that a program segment has more than one condition to throw an exception.
- In such cases, we can associate more than one `catch` statement with a `try`.
- However, each `catch` must catch a different type of exception.
- When an exception is thrown, the exception handlers are searched in order for an appropriate match.
- When no match is found, the program is terminated.
- It is also possible that arguments of several `catch` statements match the type of an exception. In such cases, the first handler that matches the exception type is executed.

### Syntax

```cpp
try
{
  // try block
}
catch (type1 arg)
{
  // catch block 1
}
catch (type2 arg)
{
  // catch block 2
}
. . .

```

### Example

```cpp
// multiple catch statements

#include <iostream>

void test(int x)
{
  // multiple catch statements
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
```

```
Output:
Caught Exception #0
Caught Exception #1
```

```cpp
// divide by zero and negative value example

#include <iostream>

double calculateMPG(double miles, double gallons)
{
  if (gallons == 0)
    throw 0;
  if (miles < 0 || gallons < 0)
    throw std::string("Negative value error!");
  return (miles / gallons);
}

int main()
{
  double miles, gallons;
  std::cout << "Enter miles and gallons: ";
  std::cin >> miles >> gallons;

  // handling multiple exceptions
  try
  {
    std::cout << "Miles per gallon: " << calculateMPG(miles, gallons) << std::endl;
  }
  catch (int &ex)
  {
    std::cerr << "Cannot divide by zero." << std::endl;
  }
  catch (std::string &ex)
  {
    std::cerr << "Cannot divide by negative value." << std::endl;
  }
  std::cout << "Program continues." << std::endl;

  return 0;
}
```

```
Output:
Enter miles and gallons: 10 20
Miles per gallon: 0.5
Program continues.
```

```
Output:
Enter miles and gallons: 10 0
Miles per gallon: Cannot divide by zero.
Program continues.
```

```
Output:
Enter miles and gallons: -10 -20
Miles per gallon: Cannot divide by negative value.
Program continues.
```
