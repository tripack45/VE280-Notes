//ex2.cpp
#include "classes.h"

void foo() {
    Base* ptrA = new Derived; 
    delete ptrA; // Double Free!
}

void foo() {
    Derived* ptrB = new Derived; 
    delete ptrB; // Double Free!
}
