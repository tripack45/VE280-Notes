#include <iostream>
#include "integer.h"
using namespace std;
void dec(Integer&); void inc(Integer&);
int main() {
    Integer i; i.set(10); cout << i.get() << " ";
    inc(i); cout << i.get() << " ";
    dec(i); cout << i.get() << endl;
}
