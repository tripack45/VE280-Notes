const int MAXELTS = 100;
class IntSet {
  int elts[MAXELTS], numElts;
  int indOf(int v) const;
public:
  void insert(int v);
  void remove(int v);
  bool query(int v) const;
  int  size() const;  
};