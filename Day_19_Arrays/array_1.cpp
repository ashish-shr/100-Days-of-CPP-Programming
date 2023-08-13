#include <iostream>
using namespace std;

int main()
{
  char alpha[4] = {'A', 'B', 'C', 'D'};
  cout << alpha[2] << endl;
  // this will access the 3rd element of the array alpha i.e. 'C'.
  alpha[0] = 'S';
  // this will change the 1st element of the array alpha into 'S'.
  cout << alpha[0];
  return 0;
}