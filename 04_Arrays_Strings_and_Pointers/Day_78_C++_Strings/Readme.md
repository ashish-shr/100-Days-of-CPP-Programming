# ⚡C++ Strings

## C++ Strings

- C++ strings are sequences of characters stored in a char array.
- Strings are used to store words and text.
- They are also used to store data, such as numbers and other types of information.
- C++ strings are the new types of strings that are introduced in C++ as std::string class defined inside `<string>` header file.
- This provides many advantages over conventional C-style strings such as dynamic size, member functions, etc.
- We can use our familar operators (+, =, <, <=, >, >=, +=, ==, !=,...) with std::string.

## Declaring and Initializing C++ Strings

### Example

```cpp
// Declaring and Initializing C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1;              // empty
  string s2{"Ashish"};    // Ashish
  string s3{s2};          // Ashish
  string s4{"Ashish", 3}; // Ash
  string s5{s2, 0, 2};    // As
  string s6{3, 'X'};      // XXX
  return 0;
}
```

## Assignment in C++ Strings

### Example

```cpp
// Assignment in C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1;
  s1 = "C++ is Awesome!";
  string s2;
  s2 = s1;
  cout << s2; // C++ is Awesome
  return 0;
}
```

## Concatenation in C++ Strings

### Example

```cpp
// Concatenation in C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string part1{"C++"};
  string part2{"is awesome"};

  string sentence;

  sentence = part1 + " " + part2 + " language!";
  cout << sentence; // C++ is awesome language!

  sentence = "C++" + "is awesome!"; // illegal

  return 0;
}
```

## Accessing Characters using [] and at() method

### Example

```cpp
// Accessing Characters using [] and at() method

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s{"Cat"};

  cout << s[0] << endl;    // C
  cout << s.at(0) << endl; // C

  s[0] = 'H'; // Hat
  cout << s << endl;

  s.at(0) = 'B'; // Bat
  cout << s << endl;
  return 0;
}
```

## Comparing C++ Strings

### Example

```cpp
// Comparing C++ Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"Apple"};
  string s2{"Banana"};
  string s3{"Coconut"};
  string s4{"apple"};
  string s5{s1}; // Apple

  cout << (s1 == s5) << endl;      // true
  cout << (s1 == s2) << endl;      // false
  cout << (s1 != s2) << endl;      // true
  cout << (s1 < s2) << endl;       // true
  cout << (s2 > s1) << endl;       // true
  cout << (s4 < s5) << endl;       // false
  cout << (s1 == "Apple") << endl; // true

  return 0;
}
```

## Substrings - substr()

- substr() extracts a substring from a std::string.

### Syntax

```cpp
object.substr(start_index, length);
```

### Example

```cpp
// Substrings - substr() in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"You are kind"};

  cout << s1.substr(0, 3) << endl; // You
  cout << s1.substr(4, 3) << endl; // are
  cout << s1.substr(8, 4) << endl; // kind

  return 0;
}
```

## Substrings - find()

- find() returns the index of a substring in a std::string.

### Syntax

```cpp
object.find(search_string);
```

### Example

```cpp
// Substrings - find() in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"This is awesome"};

  cout << s1.find("This") << endl;    // 0
  cout << s1.find("is") << endl;      // 2
  cout << s1.find("awesome") << endl; // 8
  cout << s1.find('e') << endl;       // 10
  cout << s1.find("is", 4) << endl;   // 5

  return 0;
}
```

## Removing characters -erase() and clear()

- erase() removes a substring of characters from a std::string.
- clear() clears entire string to empty string. This function doesnot return any value.

### Syntax

```cpp
object.erase(start_index, length);

object.clear();
```

### Example

```cpp
// Removing characters using erase() and clear()

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"Apple"};
  cout << s1.erase(0, 2) << endl; // ple

  string s2{"Banana"};
  cout << s2.erase(3, 3) << endl; // Ban

  // cout << s1.clear() << endl;//illegal
  s1.clear();
  cout << s1 << endl; // empty
  return 0;
}
```

## length() in C++

- length() returns the total number of characters of a std::string.

### Syntax

```cpp
string.length();
```

### Example

```cpp
// length() in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"Education"};
  cout << s1.length() << endl; // 9

  string s2{"This is awesome"};
  cout << s2.length() << endl; // 15

  return 0;
}
```

## Input >> and getline()

- Both extraction >> operator and getline() can be used to read std::string from cin, but they have some differences.
- Using extraction operator >>, only accepts up to the first space.
- Using getline(), we can read entire line until newline(\n) is found.

### Syntax

```cpp
getline(cin, string);
```

### Examples

```cpp
// input>> in C++ Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1;
  cin >> s1;          // Good Morning
  cout << s1 << endl; // Good
  return 0;
}
```

```cpp
// getline() in C++ Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1;
  getline(cin, s1);   // Good Morning
  cout << s1 << endl; // Good Morning
  return 0;
}
```
