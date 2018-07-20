class Base { protected: int i; int prot();};
class Derived : public Base {
    void bothOK() { i = 0;  prot();  /* OK */ }
} derived;
void bothError () { derived.i = 0; derived.prot(); };