class listIsEmpty {}; // An exception class
struct node{ node *next; int value; };
class IntList {
    node *first;
    void removeAll();
    void copyList(node *list);
public:
    bool isEmpty() const;
    void insert(int v);   // inserts v into the front of the list
    int remove(); // Pops the first element
    void print() const; // print the int list
    IntList();                  // default constructor
    IntList(const IntList& l);  // copy constructor
    ~IntList();                 // destructor
    IntList &operator=(const IntList &l); // assignment operator
};