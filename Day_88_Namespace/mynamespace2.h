// mynamespace2.h
using namespace std;

namespace ns1
{
  void print_text()
  {
    cout << "This function is inside namespace ns1" << endl;
  }

  void hello()
  {
    cout << "Hello from namespace ns1" << endl;
  }

}

namespace ns2
{
  void print_text()
  {
    cout << "This function is inside namespace ns2" << endl;
  }

  void hello()
  {
    cout << "Hello from namespace ns2" << endl;
  }

}