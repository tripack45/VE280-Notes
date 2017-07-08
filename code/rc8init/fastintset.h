#ifndef _FAST_INT_SET_H_
#define _FAST_INT_SET_H_
#include "oddintset.h"
#include "evenintset.h"
class FastIntSet {
  OddIntSet oddSet;
  EvenIntSet evenSet;
public:
  FastIntSet();
  void insert(int v);
  void remove(int v);
  bool query(int v) const;
  int  size() const;  
};
#endif