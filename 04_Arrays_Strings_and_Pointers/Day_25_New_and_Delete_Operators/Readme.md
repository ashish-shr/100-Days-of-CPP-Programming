# ⚡new and delete operators in C++

## new operator

- The "new" operator in C++ is used to allocate memory dynamically for a variable or an object at runtime.
- This means that the memory is allocated during the execution of the program, as opposed to being allocated at compile time.
- When the "new" operator is called, it reserves a block of memory that is large enough to hold the object being created and then returns a pointer to the first byte of that memory block.

### Syntax

```cpp
pointer_variable = new datatype;
```

### Example

```cpp
// Program to demonstrate new operator

#include <iostream>
using namespace std;

int main()
{
  // declare an int pointer
  int *ptr;

  // dynamically allocate memory using the new keyword
  ptr = new int;

  // assign value to allocated memory
  *ptr = 3;

  return 0;
}
```

## delete operator

- The "delete" operator is used to deallocate memory that the "new" operator previously allocated.
- Once a block of memory has been allocated by “new,” it is important to deallocate it when it is no longer needed so that other parts of the program can reuse the memory.
- The "delete" operator releases the memory back to the system, and other parts of the program can use it.
- We use "delete" operator in order to avoid possible memory leaks.

### Syntax

```cpp
delete pointer_variable;
```

### Example

```cpp
// Program to demonstrate delete operator

#include <iostream>
using namespace std;

int main()
{
  // declare an int pointer
  int *ptr;

  // dynamically allocate memory for an int variable
  ptr = new int;

  // assign value to the variable memory
  *ptr = 3;

  // print the value stored in memory
  cout << *ptr; // Output: 3

  // deallocate the memory
  delete ptr;

  return 0;
}
```

## Programs

```cpp
// Program to make dynamic 1D array

#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Size: ";
  cin >> size;

  // making dynamic 1D array
  int *array = new int[size];

  // taking array elements
  for (int i = 0; i < size; i++)
  {
    cout << "Array[" << i << "]: ";
    cin >> array[i];
  }

  // printing array elements
  cout << endl;
  cout << "Array Elements:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Array[" << i << "]: " << array[i] << endl;
  }

  // deleting dynamic array
  delete array;
  array = nullptr;

  return 0;
}
```

```
Output:
Size: 5
Array[0]: 3
Array[1]: 2
Array[2]: 1
Array[3]: 4
Array[4]: 5

Array Elements:
Array[0]: 3
Array[1]: 2
Array[2]: 1
Array[3]: 4
Array[4]: 5
```

```cpp
// Program to make dynamic 2D array

#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  cout << "Rows and Columns: ";
  cin >> rows >> cols;

  // making 2D dynamic array
  int **array = new int *[rows];
  for (int i = 0; i < rows; i++)
  {
    array[i] = new int[cols];
  }

  // taking array elements
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "Array[" << i << "]";
      cout << "[" << j << "]: ";
      cin >> array[i][j];
    }
  }

  // printing array elements
  cout << endl;
  cout << "Array Elements:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "Array[" << i << "]";
      cout << "[" << j << "]: ";
      cout << array[i][j] << endl;
    }
  }

  // deleting dynamic array
  for (int i = 0; i < rows; i++)
  {
    delete[] array[i];
  }
  delete[] array;
  array = nullptr;

  return 0;
}
```

```
Output:
Rows and Columns: 2 2
Array[0][0]: 1
Array[0][1]: 3
Array[1][0]: 5
Array[1][1]: 7

Array Elements:
Array[0][0]: 1
Array[0][1]: 3
Array[1][0]: 5
Array[1][1]: 7
```
