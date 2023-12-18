# 🍃Sequence Containers - Arrays in STL

## Arrays in STL

- Arrays in STL are sequential containers that are very similar to static arrays.
- They are continuous blocks of memory and have static sizes.
- Although there are very similar to static arrays in C++, their member functions make them more efficient.
- They are implemented as static arrays in memory.
- The array is present in `#include <array>` header file.

## Array Declaration

### Syntax

```cpp
std::array<dataType,size> name;
```

- data_type: The data types of the elements to be stored in the array.
- size: The size of the array.

### Example

```cpp
std::array< int, 5 > arr; //initializes a array of size 5 which stores integer values
```

## Array Initialization

### Syntax

```cpp
std::array<dataType,size> name{initialValues};
```

- initialValues: optional parameter which initializes the array with the given values.

### Example

```cpp
//initializer list
std::array<int, 5> array1 = {3, 2, 1, 4, 5};

//uniform initialization
std::array<int, 5> array2 {3, 2, 1, 4, 5};

//assign using initializer list
std::array<int, 5> array3;
array3 = {3, 2, 1, 4, 5};
```

## Functions on arrays

- `[]` : It is used to access the element stored at any index.
- `at()` : It is also used to access the element stored at any index.
- `front()` : It returns the first element of the array.
- `back()` : It returns the last element of the array.
- `size()` : It tells us the number of elements in the array.
- `fill()` : It inserts the given value at every array index.
- `front()` : It returns an iterator pointing to the first element of the array.
- `back()` : It returns an iterator pointing to the last element of the array.
- `empty()` : It tells us whether the array is empty or not.
- `data()` : It returns a pointer pointing to the first element of the array.
- `swap(array_name)` : It swaps the content of the two arrays.

### Example

```cpp
// program to demonstrate array functions

#include <iostream>
#include <array>
using namespace std;

int main()
{
  array<int, 5> arr{1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  cout << "Size of array is " << arr.size() << endl;
  cout << "First element of array is " << arr.front() << endl;
  cout << "Last element of array is " << arr.back() << endl;
  cout << "Second element of array is " << arr.at(1) << endl;
  cout << "First element of array using data method is " << *(arr.data()) << endl;
  arr.fill(10);
  cout << "The new array is ";

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  if (arr.empty() == false)
  {
    cout << "array is not empty!";
  }

  return 0;
}
```

```
Output:
1 2 3 4 5
Size of array is 5
First element of array is 1
Last element of array is 5
Second element of array is 2
First element of array using data method is 1
The new array is 10 10 10 10 10
array is not empty!
```
