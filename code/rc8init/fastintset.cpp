#include "fastintset.h"
#include <iostream>
using namespace std;

FastIntSet::FastIntSet()
    : oddSet(), evenSet(10) {
  cout << "fIntSet ctor\n";
}

FastIntSet::insert(int v) {
    if (isOdd(v))
        oddSet.insert(v);
    else 
        evenSet.insert(v);
}