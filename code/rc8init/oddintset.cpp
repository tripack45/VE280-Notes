#include "oddintset.h"
#include <iostream>
using namespace std;

OddIntSet::OddIntSet()
    : numElts(0) {
cout << "OddIntSet dft ctor\n";
}

OddIntSet::OddIntSet(int v)
    : numElts(0) {
this->insert(v)
cout << "OddIntSet elt ctor\n";
}