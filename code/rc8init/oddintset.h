#ifndef _ODD_INT_SET_H_
#define _ODD_INT_SET_H_
const int MAXELTS = 100;
class OddIntSet {
  int elts[MAXELTS], numElts;
  int indOf(int v) const;
public:
  OddIntSet();
  OddIntSet(int v);
  void insert(int v);
  void remove(int v);
  bool query(int v) const;
  int  size() const;  
};
#endif