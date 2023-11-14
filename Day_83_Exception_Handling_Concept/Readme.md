# ⚡Exception Handling Concept in C++

## Errors

### Logical Error

- due to wrong logic of the program.
- cannot be identified by the compiler.

### Semantic Error

- due to wrong syntax.
- can be identified by the compiler.

### Run-time Error

- Exceptions

## Exceptions

- Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.
- It is an object or primitive type that signals that an error has occured.
- They are some unpredictable circumstances when our program terminates suddenly with some errors or issues.
- They are caught during running of the program i.e. run-time.
- Exception handling allows you to manage run-time errors in an orderly fashion.
- Using exception handling, your program can automatically invoke an error-handling routine when an error occurs.
- The principal advantage of exception handling is that it automates much of the error-handling code that previously had to be coded "by hand" in any large program.
- C++ exception handling is built upon three keywords: throw, try and catch.
- In traditional error handling codes, there are always if-else conditions to handle errors.
- These conditions and the code to handle errors get mixed up with the normal flow.
- This makes the code less readable and maintainable.
- With try/catch blocks, the code for error handling becomes separate from the normal flow.

## throw

- The `throw` keyword is use to throw an exception.
- It is followed by an argument.

### Syntax

```cpp
throw argument;
```

## try

- In `try` block, we place code that may throw an exception.
- If the code throws an exception, the `try` block will exited.
- The `throw` exception is handled by a `catch` handler.
- If no `catch` handler exists in the program, then the program terminates.

### Syntax

```cpp
try
{
  // code that may throw an exception
}
```

## catch

- In `catch` block, we place the code that handles the exception.
- We can have multiple `catch` handlers.
- We may or may not cause the program to terminate.

### Syntax

```cpp
catch(Exception ex)
{
  // code to handle the exception
}
```

## Exception Handling

**Divide by Zero(0)**

- What happens if `total` is zero?

```cpp
// What happens if `total` is zero?

double sum{}, total{}, average{};
if(total == 0)
  // what to do?
else
  average = sum / total;
```

### Example

```cpp
// divide by zero example

#include <iostream>

int main()
{
  double sum{}, total{}, average{};
  std::cout << "Enter sum and total: ";
  std::cin >> sum >> total;

  try // try block
  {
    if (total == 0)
      throw 0;             // throw the exception
    average = sum / total; // won't execute if total == 0
    std::cout << "Average: " << average << std::endl;
  }
  catch (int &ex) // exception handler
  {
    std::cerr << "Can't divide by " << ex << std::endl;
  }

  std::cout << "Program continues" << std::endl;

  return 0;
}
```

```
Output:
Enter sum and total: 10 20
Average: 0.5
Program continues
```

```
Output:
Enter sum and total: 10 0
Can't divide by 0
Program continues
```
