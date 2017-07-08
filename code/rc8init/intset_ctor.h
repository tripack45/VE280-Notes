class IntSet {
  // ....
public:
  // ....
  IntSet() : numElts(0) {}
  // Intialize an empty set
  IntSet(int v);  
  // Init. a set with 1 elt
  // provided in the arg
};
IntSet::IntSet(int v) 
    : numElts(1) {
    elts[0] = v;
}