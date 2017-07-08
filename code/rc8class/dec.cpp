#include "integer.h"
void dec(Integer& i) {
    int old = i.get();
    i.set(old - 1);
}