#include <iostream>
int add     (int x, int y) {return x + y;}
int subtract(int x, int y) {return x - y;}
int (*fun[])(int, int) = {add, subtract};
using namespace std;
int main() {
    int op = 1, x = 0, y = 0;
    cout << "Select your operation (1,2): "; cin >> op;
    cout << "Numbers: "; cin >> x >> y;
    cout << "ANS = " << fun[op-1](x, y) << endl;
}