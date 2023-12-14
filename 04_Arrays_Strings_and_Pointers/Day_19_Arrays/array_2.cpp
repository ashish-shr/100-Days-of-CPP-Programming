#include <iostream>
using namespace std;

int main()
{
  string letters[2][4] = {
      {"A", "B", "C", "D"},
      {"E", "F", "G", "H"}};
  cout << letters[0][2];
  // this will print the 3rd element of the first array i.e. "C".
  return 0;
}