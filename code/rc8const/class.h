#include <typeinfo>
#include <iostream> 
using namespace std; // BAD PRACTICE!
class Foo {
  int value;
public:
  void bar() const {
    cout << typeid(this).name() << endl;
    cout << typeid(value).name() << endl;
  }
  void baz() {
    cout << typeid(this).name() << endl;
    cout << typeid(value).name() << endl;
  }
};