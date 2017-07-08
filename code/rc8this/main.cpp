#include <iostream>

using namespace std;

class Natural {
	int value;
public:
	int get() { return value; }
	void set(int value) {
		this->value = value;
	}
	void printThis() {
		cout << this << endl;
	}
};

int main() {
	Natural n1;
	Natural n2;
	cout << &n1 << endl;
	n1.printThis();
	cout << &n2 << endl;
	n2.printThis();
}
