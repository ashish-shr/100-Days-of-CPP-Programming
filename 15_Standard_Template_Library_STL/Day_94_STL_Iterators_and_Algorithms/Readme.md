# ☄️STL Iterators and STL Algorithms

## STL Iterators

- An iterator is a pointer-like object representing an element's position in a container.
- It is used to iterate over elements in a container.
- The main advantage of an iterator is to provide a common interface for all the containers type.
- Iterators make the algorithm independent of the type of the container used.
- Iterators provide a generic approach to navigate through the elements of a container.

### Syntax

Iterators must be declared based on the container type they will iterate over.

```cpp
containerType::iteratorType iteratorName;
```

### Examples

```cpp
std::vector<int>::iterator itr1;

std::list<std::string>::iterator itr2;

std::map<std::string, std::string>::iterator itr3;

std::set<char>::iterator itr4;
```

## begin() and end()

- The container classes provide two basic member functions that allow to iterate or move through the elements of a container.

  - `begin()`: The `begin()` function returns an iterator pointing to the first element of the container.
  - `end()`: The `end()` function returns an iterator pointing to the past-the-last element of the container.

### Example

```cpp
// program to print vector elements using an iterator

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  std::vector<int> v{3, 2, 1, 8, 7};

  vector<int>::iterator itr;

  for (itr = v.begin(); itr != v.end(); itr++)
  {
    std::cout << *itr << " ";
  }
  return 0;
}
```

```
Output:
3 2 1 8 7
```

## Working With C++ Iterators

C++ iterators provide a consistent interface for accessing and manipulating elements in a container. They come with a set of operations that we can perform, making them versatile tools in a developer's arsenal.

### Initialization And Assignment

A typical first step when working with iterators is initialization. We can get an iterator pointing to the first element in a container with the begin() function, and one just past the end with end().

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int>::iterator start = numbers.begin();
std::vector<int>::iterator finish = numbers.end();
```

### Traversing A Container

We can use increment (++) and decrement (--) operators with iterators to traverse a container. The increment operator moves the iterator to the next element, and the decrement operator moves it to the previous one.

```cpp
for(auto itr = numbers.begin(); itr != numbers.end(); ++itr)
{
    std::cout << *itr << std::endl;
}
```

In the example above, we start at the beginning of the container and move the iterator with the ++ operator until we reach the end, printing each number.

### Accessing Elements

Dereferencing an iterator with the `*` operator gives us access to the element it points to. In addition, random access iterators allow us to directly access elements with the `[]` operator.

```cpp
std::vector<int>::iterator itr = numbers.begin() + 2;
std::cout << *itr << std::endl; // prints the third element
```

### Modifying Elements

We can also modify the elements an iterator points to.

```cpp
*itr = 10; // changes the third element to 10
```

## Operations performed on the Iterators

- Operator (`*`) : The `*` operator returns the element of the current position pointed by the iterator.
- Operator (`++`) : The `++` operator increments the iterator by one. Therefore, an iterator points to the next element of the container.
- Operator (`==`) and Operator (`!=`) : Both these operators determine whether the two iterators point to the same position or not.
- Operator (`=`) : The `=` operator assigns the iterator.

### Dereferencing

- Dereferencing is a fundamental operation in the realm of iterators.
- By using the `*` operator, we can access the value of the element an iterator points to.

```cpp
std::vector<int>::iterator itr = numbers.begin();
int value = *itr; // access the first element of the vector
```

### Increment and Decrement

- For increment (`++`) and decrement (`--`) operations, these move the iterator forward or backward, respectively.
- These are especially useful for traversal in containers.

```cpp
++itr; // move the iterator to the next element
--itr; // move the iterator to the previous element
```

### Random access

- For random access iterators, we can add or subtract integers to jump directly to different positions in the container.

```cpp
itr + 5; // move the iterator 5 positions forward
itr - 3; // move the iterator 3 positions backward
```

### Comparision

- Comparison operators (`==`, `!=`) are used to compare two iterators.
- This is commonly done to check if an iterator has reached the `end()` of a container.

```cpp
if (itr != numbers.end())
{
  // iterator has not reached the end
}
```

### Assignment

- Assignment (`=`) allows us to set one iterator to the position of another.

```cpp
std::vector<int>::iterator itr2 = itr; // both iterators now point to the same position
```

## STL Algorithms

- STL algorithms work on sequences of container elements.
- STL has many common and useful algorithms.
- Many algorithms require extra information in order to do their work. (for example: Functors(function objects), Function Pointers, Lambda Expressions).
- STL algorithms are defined in the header `<algorithm>`.
- All STL algorithms expect iterators as arguments.
- STL iterators are defined in the header `<iterator>`.

### Some popular STL algorithms

- `std::sort` : Sorts elements in a range.
- `std::reverse` : Reverses the order of elements in a range.
- `std::find` : Finds the first occurrence of a value in a range.
- `std::accumulate` : Computes the sum of a range of values.
- `std::count` : Counts the occurrences of a value in a range.
- `std::remove` : Removes all occurrences of a value in a range.
- `std::find_if` : Finds the first element in a range for which a given predicate is true.
- `std::transform` : Applies a function to each element in a range and stores the result in another range.
- `std::replace` : Replaces all occurrences of a value with another value in a range.
- `std::unique` : Rearranges elements in a range such that each element appears only once.
- `std::max_element` : Finds the maximum element in a range.
- `std::min_element` : Finds the minimum element in a range.
- `std::binary_search` : Checks if a value exists in a sorted range.
- `std::count_if` : Counts the elements in a range that satisfy a given predicate.
- `std::shuffle` : Randomly shuffles elements in a range.
- `std::rotate` : Rotates the elements in a range.
- `std::copy` : Copies elements from one range to another.

### Examples of some popular STL Algorithms

```cpp
// std::sort

std::vector<int> numbers = {4, 2, 8, 5, 1};
std::sort(numbers.begin(), numbers.end());
// Result: {1, 2, 4, 5, 8}
```

```cpp
// std::reverse

std::vector<int> numbers = {1, 2, 3, 4, 5};
std::reverse(numbers.begin(), numbers.end());
// Result: {5, 4, 3, 2, 1}
```

```cpp
// std::find

std::vector<int> numbers = {10, 20, 30, 40, 50};
auto it = std::find(numbers.begin(), numbers.end(), 30);
// it points to the element 30
```

```cpp
// std::accumulate

std::vector<int> numbers = {1, 2, 3, 4, 5};
int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
// Result: sum = 15
```

```cpp
// std::count

std::vector<int> numbers = {1, 2, 2, 3, 2, 4};
int count = std::count(numbers.begin(), numbers.end(), 2);
// Result: count = 3
```

```cpp
// std::remove

std::vector<int> numbers = {1, 2, 3, 2, 4, 2};
auto new_end = std::remove(numbers.begin(), numbers.end(), 2);
// Result: numbers = {1, 3, 4, ...} (size remains the same, elements after new_end are unspecified)
```

```cpp
// std::find_if

std::vector<int> numbers = {10, 20, 30, 40, 50};
auto it = std::find_if(numbers.begin(), numbers.end(), [](int x){ return x > 30; });
// it points to the element 40
```

```cpp
// std::max_element

std::vector<int> numbers = {5, 2, 8, 3, 1};
auto max_element = std::max_element(numbers.begin(), numbers.end());
// Result: max_element points to the element 8
```

```cpp
// std::min_element

std::vector<int> numbers = {5, 2, 8, 3, 1};
auto min_element = std::min_element(numbers.begin(), numbers.end());
// Result: min_element points to the element 1
```
