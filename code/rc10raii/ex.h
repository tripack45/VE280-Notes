// intset.h
const int MAXELTS = 100;
class IntSet {
    int *elts, sizeElts; 
    int numElts; 
public:
    IntSet(int size = MAXELTS) 
        : elts(new int[size]), 
          sizeElts(size), 
          numElts(0) {}

    ~IntSet() { delete[] elts;}
    // Other methods unchanged
};