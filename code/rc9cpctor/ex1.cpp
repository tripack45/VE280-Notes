#include <iostream>
using namespace std;

class A {
public:
    A(const A& a) {
        cout << "Copy A" << endl;
    }
};
class B {
    A a;
public:
    B() = default;
    B (const B& b) : a(b.a) {}
};
int main() {
    B b;
    B bp(b);
}