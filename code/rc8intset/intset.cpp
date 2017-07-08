int 
IntSet::indOf(int v) const {
  // Omit implementating
  // Not found return MAXELTS
}
void IntSet::insert(int v) {
  if (indOf(v) != MAXELTS) {
    assert(numElts < 100);
    elts[numElts++] = v;
  }
}
void IntSet::remove(int v) {
  int vic = indOf(v);
  if (vic != MAXELTS) {
    elts[vic]=elts[numElts-1];
    numElts--;
  }
}