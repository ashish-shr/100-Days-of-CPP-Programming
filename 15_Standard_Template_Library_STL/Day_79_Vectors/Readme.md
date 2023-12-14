# ⚡C++ Vectors

## Vectors

- Vectors are used to store elements of similar data types.
- However, unlike arrays, the size of a vector can grow dynamically.
- That is, we can change the size of the vector during the execution of a program as per our requirements.
- Although a vector is dynamic, we can still use the standard array subscript notation to access its elements.
- Vectors are part of the C++ Standard Template Library.
- To use vectors, we need to include the `<vector>` header file in our program.

## Vectors Characteristics

- Dynamic size
- Very efficient compared to arrays
- Elements are of the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at index 0
- Last element is at index (size - 1)
- Provides many useful functions that do bounds checking
- Elements are initialized to zero

## Vector Declaration

### Syntax

```cpp
std::vector<T> vector_name;
```

- The type parameter `<T>` specifies the type of the vector.
- It can be any primitive data type such as int, char, float, etc.

### Example

```cpp
std::vector<int> scores;
std::vector<char> vowels;
std::vector<double> temperatures;
std::vector<char> grades(5); //initializes 5 characters
std::vector<float> gpa(3); //initializes 3 floats
```

## Vector Initialization Methods

```cpp

// Initializer list
vector<int> lengths = {10, 20, 30};

vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

vector<int> scores {100, 96, 89, 80, 78};

// Here, 3 is the size of vector and 100 is the value
vector<int> distance(3, 100);
// or
vector<int> distance {100, 100, 100};
```

## Useful Vector functions

### 1. Accessing Vector Elements

- We can use the index number to access the vector elements.
- We can also use the `at()` function to access the element from the specified index.

### Example

```cpp
// accessing vector elements using index and at() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Element at Index 0: " << num.at(0) << endl; // 1
  cout << "Element at Index 1: " << num.at(1) << endl; // 2
  cout << "Element at Index 2: " << num.at(2) << endl; // 3
  cout << "Element at Index 3: " << num[3] << endl;    // 4
  cout << "Element at Index 4: " << num[4] << endl;    // 5

  return 0;
}
```

```
Output:
Element at Index 0: 1
Element at Index 1: 2
Element at Index 2: 3
Element at Index 3: 4
Element at Index 4: 5
```

### 2. Adding Elements to a Vector

- To add a single element into a vector, we use the `push_back()` function.
- It inserts an element into the end of the vector.

### Example

```cpp
// adding elements to a vector using push_back() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  num.push_back(4); // adds 4 at the end of vector num

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}
```

```
Output:
Initial Vector: 1 2 3
Final Vector: 1 2 3 4
```

### 3. Changing Vector Elements

- We can change an element of the vector using the same `at()` function.

### Example

```cpp
// changing vector elements using at() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  num.at(0) = 10; // sets index 0 element to 10
  num.at(4) = 20; // sets index 4 element to 20

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}
```

```
Output:
Initial Vector: 1 2 3 4 5
Final Vector: 10 2 3 4 20
```

### 4. Deleting Elements from Vector

- We can delete a single element from a vector using `pop_back()` function.
- `pop_back()` deletes a single element from last.

### Example

```cpp
// deleting elements to a vector using pop_back() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  num.pop_back(); // deletes 5 from vector num

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}
```

```
Output:
Initial Vector: 1 2 3 4 5
Final Vector: 1 2 3 4
```

### 5. Size of Vector

- We can find size of a vector using `size()` function.

### Example

```cpp
// finding size of vector using size() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << num.size() << endl; // returns size of vector num i.e. 5

  return 0;
}
```

```
Output:
5
```

### 6. First element and Last element of a vector

- We can use `front()` function to return first element of a vector.
- We can use `back()` function to return last element of a vector.

### Example

```cpp
// first and last element of a vector using front() and back()

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  // returns first element of a vector num
  cout << "First Element: " << num.front() << endl; // 1
  // returns last element of a vector num
  cout << "Last Element: " << num.back() << endl; // 5

  return 0;
}
```

```
Output:
First Element: 1
Last Element: 5
```

### 7. Clearing vector elements

- We can remove all the vector elements using `clear()` function.

### Syntax

```cpp
//clear
vector_name.clear();
```

### Example

```cpp
// removing all the elements of a vector using clear() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;
  num.clear();

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
```

```
Output:
Initial Vector: 1 2 3 4 5
Final Vector:
```

## Vector Iterators

- Vector iterators are used to point to the memory address of a vector element.
- In some ways, they act like pointers in C++.
- We need to make iterators corresponding to the type of vectors.

### Syntax

```cpp
vector<T>::iterator iteratorName;
```

### Example

```cpp
vector<int> scores;
vector<int>::iterator iter1;// iterator for int vector

vector<char> vowels;
vector<char>::iterator iter2;// iterator for char vector

```

## Initializing Vector Iterators

- We can initialize vector iterators using the `begin()` and `end()` functions.

### 1. begin() function

- The `begin()` function returns an iterator that points to the first element of the vector.

### Example

```cpp
// initializing vector iterators using begin() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  vector<int>::iterator iter;

  // iter points to num[0] -> 1
  iter = num.begin();
  cout << "num[0] = " << *iter << endl; // 1

  // iter points to num[2] -> 3
  iter = num.begin() + 2;
  cout << "num[2] = " << *iter; // 3

  return 0;
}
```

```
Output:
num[0] = 1
num[2] = 3
```

### 2. end() function

- The `end()` function points to the theoretical element that comes after the final element of the vector.
- So, we have to use `num.end() - 1` to point to the last element of a vector.

### Example

```cpp
// initializing vector iterators using end() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  vector<int>::iterator iter;

  // iter points to the last element i.e. num[4]
  iter = num.end() - 1;
  cout << *iter; // 5

  return 0;
}
```

```
Output:
5
```

### erase() function

- We can also use `erase()` function to remove elements from the specified position or range.

### Syntax

```cpp
//erase()
vector_name.erase(position);    //deletion at specific position
vector_name.erase(starting_position, ending_position);    // deletion in range
```

> Note that the element at starting_position will be removed, but the element at end_pos will not. Only the elements before ending_position will be removed. Hence, the range given to this function is not inclusive.

### Examples

```cpp
// removing elements using erase() function at specific position

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};
  vector<int>::iterator itr;

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  itr = num.begin(); // points num[0]
  num.erase(itr);    // removes num[0] element

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
```

```
Output:
Initial Vector: 1 2 3 4 5
Final Vector: 2 3 4 5
```

```cpp
// removing elements using erase() function in range

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{3, 2, 1, 4, 5, 6, 7, 8};
  vector<int>::iterator itr1, itr2;

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  itr1 = num.begin() + 3; // points num[3]
  itr2 = num.begin() + 5; // points num[5]
  num.erase(itr1, itr2);  // removes elements from num[3] to num[4]

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " "; // 3 2 1 6 7 8
  }
  cout << endl;

  return 0;
}

```

```
Output:
Initial Vector: 3 2 1 4 5 6 7 8
Final Vector: 3 2 1 6 7 8
```

## insert() function

- We can use `insert()` function to insert new elements before the element at the specified position.

### 1. Insert an Element at the Given Index

### Syntax

```cpp
vector_name.insert (position, val);
```

- **position** – It specifies the iterator which points to the position where the insertion is to be done.
- **val** – It specifies the value to be inserted.

### Example

```cpp
// insert an element at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Original vector :\n";
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 100 at num[3]
  num.insert(num.begin() + 3, 100);

  // Printing the modified vector
  cout << "Vector after inserting 100 at num[3] :\n";
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 500 at num[1]
  num.insert(num.begin() + 1, 500);

  // Printing the modified vector
  cout << "Vector after inserting 500 at num[1] :\n";
  for (auto x : num)
    cout << x << " ";

  return 0;
}
```

```
Output:
Original vector :
1 2 3 4 5
Vector after inserting 100 at num[3] :
1 2 3 100 4 5
Vector after inserting 500 at num[1] :
1 500 2 3 100 4 5
```

### 2. Insert Multiple Elements at Given Index

### Syntax

```cpp
vector_name.insert(position, size, val);
```

- **position** – It specifies the iterator which points to the position where the insertion is to be done.
- **size** – It specifies the number of times a val is to be inserted at the specified position.
- **val** – It specifies the value to be inserted.

### Example

```cpp
// insert multiple elements at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  // Printing out the original vector
  cout << "Original vector : " << endl;
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 100, 4 times starting at num[3]
  num.insert(num.begin() + 3, 4, 100);

  // Printing the modified vector
  cout << "Vector after inserting 100, 4 times, starting at num[3]" << endl;
  for (auto x : num)
    cout << x << " ";

  return 0;
}

```

```
Output:
Original vector :
1 2 3 4 5
Vector after inserting 100, 4 times, starting at num[3]
1 2 3 100 100 100 100 4 5
```

### 3. Insert the Range of Elements at Given Index

### Syntax

```cpp
vector_name.insert(position, iterator1, iterator2)
```

- **position** – It specifies the position at which insertion is to be done in the vector.
- **iterator1** – It specifies the starting position from which the elements are to be inserted
- **iterator2** – It specifies the ending position till which elements are to be inserted

### Example

```cpp
// insert ramge of elements at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> original{1, 2, 3, 4, 5};

  vector<int> temp{2, 5, 9, 0, 3, 10};

  // Printing out the original vector
  cout << "Original vector :" << endl;
  for (auto x : original)
    cout << x << " ";
  cout << endl;

  // Printing out the temp vector
  cout << "Temp vector :" << endl;
  for (auto x : temp)
    cout << x << " ";
  cout << endl;

  // Inserting the portion of temp vector in original
  // vector temp.begin()+3 is starting iterator of vector
  // to be copied temp.begin()+5 is ending iterator of
  // vector to be copied
  original.insert(original.begin() + 3, temp.begin() + 2, temp.begin() + 5);

  // Printing the modified vector
  cout << "Vector after Inserting the portion of temp vector in original vector :" << endl;
  for (auto x : original)
    cout << x << " ";

  return 0;
}

```

```
Output:
Original vector :
1 2 3 4 5
Temp vector :
2 5 9 0 3 10
Vector after Inserting the portion of temp vector in original vector :
1 2 3 9 0 3 4 5
```

## 2D Vectors

- 2D Vectors are the vector of the vector.

### Syntax

```cpp
vector<vector<type>> vector_name;
```

### Example

```cpp
// 2D vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // 2D Vector
  vector<vector<int>> vect{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  for (int i = 0; i < vect.size(); i++)
  {
    for (int j = 0; j < vect[i].size(); j++)
    {
      cout << vect[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
```

```
Output:
1 2 3
4 5 6
7 8 9
```
