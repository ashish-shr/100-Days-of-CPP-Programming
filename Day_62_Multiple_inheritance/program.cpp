// Program to demonstrate Multiple inheritance

#include <iostream>
using namespace std;

// first base class
class firstPoint
{
protected:
  int xCoordinateF, yCoordinateF;

public:
  void getFirstPoint()
  {
    cout << "Enter x and y coordinate for first point: ";
    cin >> xCoordinateF >> yCoordinateF;
  }
};

// second base class
class second_point
{
protected:
  int xCoordinateS, yCoordinateS;

public:
  void getSecondPoint()
  {
    cout << "Enter x and y coordinate for second point: ";
    cin >> xCoordinateS >> yCoordinateS;
  }
};

// derived class
class totalCoordinate : public firstPoint, public second_point
{
  int xCoordinateSum, yCoordinateSum;

public:
  void getCoordinateSum()
  {
    xCoordinateSum = xCoordinateF + xCoordinateS;
    yCoordinateSum = yCoordinateF + yCoordinateS;
    cout << "Sum of x-coordinates: " << xCoordinateSum << endl;
    cout << "Sum of y-coordinates: " << yCoordinateSum << endl;
  }
};

int main()
{
  totalCoordinate firstLine;
  firstLine.getFirstPoint();
  firstLine.getSecondPoint();
  firstLine.getCoordinateSum();
  return 0;
}