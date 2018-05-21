//driver.cpp
#include "classes.h"

void foo() {
    Derived* ptrA = new Base; 
    delete ptrA; // Memroy Leak!
}

void foo() {
    Derived* ptrB = new Derived; 
    delete ptrB; // Safe
}