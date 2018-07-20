//ex3.cpp
#include "classes.h"

void foo() {
    Base* ptrA = new Derived; 
    delete ptrA; // Safe!
}

void foo() {
    Derived* ptrB = new Derived; 
    delete ptrB; // Safe!
}
