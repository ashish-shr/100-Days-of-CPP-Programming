# ⚡Exception Handling Options in C++

## Catching All Exceptions

- In some circumstances we will want an exception handler to catch all exceptions instead of just a certain type.
- To catch all the exceptions, we specify ellipses(...) in the catch block.
- This method will catch all types of exceptions in the program.

### Syntax

```cpp
catch(...)
{
  //catch block
}
```

### Example

```cpp
// catching all exceptions

#include <iostream>
using namespace std;

void exHandler(int test)
{
  try
  {
    if (test == 0)
      throw test; // throw int
    if (test == 1)
      throw 'a'; // throw char
    if (test == 2)
      throw 123.23; // throw double
  }
  catch (...)
  {
    // catch all exceptions
    cout << "Caught One!\n";
  }
}

int main()
{
  cout << "Start\n";
  exHandler(0);
  exHandler(1);
  exHandler(2);
  cout << "End";
  return 0;
}
```

```
Output:
Start
Caught One!
Caught One!
Caught One!
End
```

## Rethrowing an Exception

- If we wish to rethrow an expression from within an exception handler, we may do so by calling throw, by itself, with no exception.
- This causes the current exception to be passed on to an outer try/catch sequence.
- The most likely reason for doing so is to allow multiple handlers access to the exception.

### Example

```cpp
// rethrowing an exception

#include <iostream>
using namespace std;

void exHandler()
{
  try
  {
    throw "hello"; // throw a char *
  }
  catch (const char *)
  {
    // catch a char *
    cout << "Caught char * inside exHandler\n";
    throw; // rethrow char * out of function
  }
}

int main()
{
  cout << "Start\n";
  try
  {
    exHandler();
  }
  catch (const char *)
  {
    cout << "Caught char * inside main\n";
  }
  cout << "End";
  return 0;
}
```

```
Output:
Start
Caught char * inside exHandler
Caught char * inside main
End
```

## Creating User-defined Exception Classes

- We can create our own exception classes and throw instances of those classes.

### Example

```cpp
// user-defined exception classes

#include <iostream>

class DivideByZeroException
{
};

class NegativeValueException
{
};

double calculateMPG(double miles, double gallons)
{
  // throwing user-defined exception classes
  if (gallons == 0)
    throw DivideByZeroException();
  if (miles < 0 || gallons < 0)
    throw NegativeValueException();
  return (miles / gallons);
}

int main()
{
  double miles, gallons;
  std::cout << "Enter miles and gallons: ";
  std::cin >> miles >> gallons;

  try
  {
    std::cout << "Miles per gallon: " << calculateMPG(miles, gallons) << std::endl;
  }

  // catching user-defined exceptions
  catch (const DivideByZeroException &ex)
  {
    std::cerr << "Cannot divide by zero." << std::endl;
  }
  catch (const NegativeValueException &ex)
  {
    std::cerr << "Cannot divide by negative value." << std::endl;
  }
  std::cout << "Program continues." << std::endl;

  return 0;
}
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
