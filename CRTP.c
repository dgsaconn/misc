#include <iostream>

using namespace std;


template<class T>
class Base
{
public:
  Base() { cout << "Base=" << this << endl; }
};

class Derived : public Base<Derived>
{
public:
  Derived() { cout << "Derived=" << this << endl; }
  string mName;
  const string& getName() { return mName; }
};


int main() {

  cout << "test" << endl;
  Derived d;

  return 0;
}
