//driver.cpp
#include "classes.h"

void foo() {
    Base* ptrA = new Derived; 
    delete ptrA; // Memroy Leak!
}

void foo() {
    Derived* ptrB = new Derived; 
    delete ptrB; // Safe
}
