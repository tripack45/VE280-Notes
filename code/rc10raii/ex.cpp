// driver.cpp
#include "ex.h"
class T {
    IntSet s1, s2;
// ommit other
}
// Nothing leaks
void foo() {
    IntSet s;
    while (...) {
        T t; if (...) throw -1;
    }
    if (...) return;
    else ...;
}