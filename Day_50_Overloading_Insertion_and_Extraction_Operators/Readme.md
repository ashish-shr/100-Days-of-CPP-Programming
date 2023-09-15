# ⚡Overloading Insertion and Extraction Operators (<< >>)

## Insertion and Extraction Operators

- In C++, the operator << is called an insertion operator because it inserts the characters into a stream and the operator >> is called an extraction operator because it extracts characters from a stream.
- Like other operators such as +, -, \*, etc. the operators >> and << can also be overloaded.
- insertion operator (<<) works with cout and extraction operator (>>) works with cin.
- cout is an object of ostream class and cin is an object of istream class.
- The functions that overload the insertion and extraction operators are called inserter and extractor respectively.
- It is important to make operator overloading function a friend because insertion and extraction operator requires two classes.
- In the overloaded insertion and extraction operators, wer should pass the object by reference (or by pointer) rather than by value.
- Passing by value creates a copy of the object, and any changes made to that copy will not affect the original object resulting garbage value.

### Syntax

```cpp
  // friend functions for overloading >> and << operators
  friend void operator>>(istream &in, test &t);
  friend void operator<<(ostream &out, test &t);
```

### Example

```cpp
// Overloading insertion and extraction operators

#include <iostream>
using namespace std;

class test
{
  int length, breadth;

public:
  // friend functions for overloading >> and << operators
  friend void operator>>(istream &in, test &t);
  friend void operator<<(ostream &out, test &t);
};

// overloading >> operator
void operator>>(istream &in, test &t)
{
  in >> t.length >> t.breadth;
}

// overloadingn << operator
void operator<<(ostream &out, test &t)
{
  out << "Length: " << t.length << " Breadth: " << t.breadth << endl;
}

int main()
{
  test t1, t2;
  cout << "Enter length and breadth for t1: ";
  cin >> t1; // calling overloaded >> operator
  cout << "Enter length and breadth for t2: ";
  cin >> t2;                      // calling overloaded >> operator
  cout << "Values of t1: " << t1; // calling overloaded << operator
  cout << "Values of t2: " << t2; // calling overloaded << operator
  return 0;
}
```

```
Output:
Enter length and breadth for t1: 3 21
Enter length and breadth for t2: 8 7
Values of t1: Length: 3 Breadth: 21
Values of t2: Length: 8 Breadth: 7
```
