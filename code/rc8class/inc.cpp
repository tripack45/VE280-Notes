#include "integer.h"
void inc(Integer& i) {
    int old = i.get();
    i.set(old + 1);
}