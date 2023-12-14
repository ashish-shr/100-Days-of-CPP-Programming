# ⚡Problems on Conditional Statements

## Problems

1. Write a C++ program to find whether a given year is a leap year or not.

2. Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

3. Write a C++ program to read temperature in centigrade and display a suitable message according to the temperature state below:

   - Temp < 0 then Freezing weather
   - Temp 0-10 then Very Cold weather
   - Temp 10-20 then Cold weather
   - Temp 20-30 then Normal in Temp
   - Temp 30-40 then Its Hot
   - Temp >=40 then Its Very Hot

4. Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene.

5. Write a C++ program to check whether a character is an alphabet, digit or special character.

6. Calculator program to ask two numbers and do mathematical operations such as (+, -, \*, /, %) using switch case statement.

## Programs

```cpp
// 1. Write a C++ program to find whether a given year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter year: ";
  cin >> year;
  if (year % 4 == 0 || year % 400 == 0)
    cout << year << " is a leap year.";
  else
    cout << year << " is not a leap year.";
  return 0;
}
```

```cpp
// 2. Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cout << "Enter x and y coordinates: ";
  cin >> x >> y;
  if (x > 0 && y > 0)
    cout << "First Quadrant";
  else if (x < 0 && y > 0)
    cout << "Second Quadrant";
  else if (x < 0 && y < 0)
    cout << "Third Quadrant";
  else if (x > 0 && y < 0)
    cout << "Fourth Quadrant";
  return 0;
}
```

```cpp
/*
3. Write a C++ program to read temperature in centigrade and display a suitable message according to the temperature state below:
- Temp < 0 then Freezing weather
- Temp 0-10 then Very Cold weather
- Temp 10-20 then Cold weather
- Temp 20-30 then Normal in Temp
- Temp 30-40 then Its Hot
- Temp >=40 then Its Very Hot
*/

#include <iostream>
using namespace std;

int main()
{
  float temp;
  cout << "Enter temperature (Celcius): ";
  cin >> temp;
  if (temp < 0)
    cout << "Freezing weather";
  else if (temp >= 0 && temp < 10)
    cout << "Very Cold weather";
  else if (temp >= 10 && temp < 20)
    cout << "Cold weather";
  else if (temp >= 20 && temp < 30)
    cout << "Normal in Temp";
  else if (temp >= 30 && temp < 40)
    cout << "Its Hot";
  else if (temp >= 40)
    cout << "Its Very Hot";
  return 0;
}
```

```cpp
// 4. Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include <iostream>
using namespace std;

int main()
{
  float sideA, sideB, sideC;
  cout << "Enter three sides of triangle: ";
  cin >> sideA >> sideB >> sideC;
  if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
  {
    if ((sideA == sideB) && (sideB == sideC) && (sideA == sideC))
      cout << "Equilateral triangle";
    else if ((sideA == sideB) || (sideB == sideC) || (sideA == sideC))
      cout << "Isoceles triangle";
    else
      cout << "Scalene triangle";
  }
  else
    cout << "Invalid sides";
  return 0;
}
```

```cpp
// 5. Write a C++ program to check whether a character is an alphabet, digit or special character.

#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Character? ";
  cin >> ch;
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    cout << ch << " is an alphabet";
  else if (ch >= '0' && ch <= '9')
    cout << ch << " is a digit";
  else
    cout << ch << " is a special character";
  return 0;
}
```

```cpp
// 6. Calculator program to ask two numbers and do mathematical operations such as (+, -, *, /, %) using switch case statement.

#include <iostream>
using namespace std;

int main()
{
  int fnum, snum, choice;
  cout << "1. Add | 2. Subtract | 3. Multiply | 4. Divide | 5. Remainder" << endl;
  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum + snum;
    break;

  case 2:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum - snum;
    break;

  case 3:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum * snum;
    break;

  case 4:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum / snum;
    break;

  case 5:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum % snum;

  default:
    cout << "Invalid choice!";
  }
  return 0;
}
```
