# 🫧Function Templates

## Function Templates

- Generic functions use the concept of a function template.
- Generic functions define a set of operations that can be applied to the various types of data.
- The type of the data that the function will operate on depends on the type of the data passed as a parameter.
- A Generic function is created by using the keyword `template`.
- The template defines what function will do.

### Syntax

```cpp
//defining a function template
template <typename T>
T functionName(T parameter1, T parameter2, ...)
{
    // code
}
```

In the above code, `T` is a template argument that accepts different data types (`int`, `float`, etc.), and `typename` is a keyword.

```cpp
//calling a function template
functionName<dataType>(parameter1, parameter2,...);
```

### Example

```cpp
// program to find max out of 2 variables using function template

#include <iostream>

// function template
template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  // calling max function template
  std::cout << max<int>(3, 21) << std::endl;
  std::cout << max<float>(8.3f, 7.3f) << std::endl;
  std::cout << max<double>(1.4, 3.8) << std::endl;

  return 0;
}
```

```
Output:
21
8.3
3.8
```

## Overriding Function Templates

- Function templates are not suitable for handling all data types, so it is necessary to override function templates by using normal function for specific data types.
- If a program has both the function and function template with the same name, first compiler selects the normal function, if it matches with the requested data type, otherwise it creates a function using a function template.

## Overloading Function Templates

- The function templates can also be overloaded with multiple declarations.
- Similar to overloading of normal functions, overloaded function templates must differ either in
  terms of number of parameters or their type.

```cpp
// overloading function template

#include <iostream>

// template to calculate max of 2 variables
template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

// template to calculate max of 3 variables
template <typename T>
T max(T a, T b, T c)
{
  return max(max(a, b), c);
}

int main()
{
  std::cout << "Max(3, 21): " << max<int>(3, 21) << std::endl;
  std::cout << "Max(8, 7, 3): " << max<int>(8, 7, 3) << std::endl;

  return 0;
}
```

```
Output:
Max(3, 21): 21
Max(8, 7, 3): 8
```

## Default arguments in function templates

- We can specify the default arguments in our function templates.
- While doing so, we can call the function template without specifying the datatype.
- And if, we do specify the datatype, then the default argument in our function template will be overwritten.
- The rules are same as specifying the default arguments in functions.

### Syntax

```cpp
//defining a function template with default argument
template <typename T = int>
T functionName(T parameter1, T parameter2, ...)
{
  // code
}

int main()
{
  functionName <>(1, 3); //both arguments will taken as integer value
  ... ... ...
}
```
