//classes.h
class Base {
protected:
    int *p;
public:
    Base() : p(new int(10)) {}
    ~Base() {delete p;}
};

class Derived : public Base {
    int *q;
public:
    Derived() : 
     Base(), q(new int(20)) {}
    ~Derived() {delete q;}
};