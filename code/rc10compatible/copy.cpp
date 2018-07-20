// copy.cpp
void test() {
    Derived d; d.a = "hello";
    Base b = d;   /* cp Base */
    passByVal(d); 
    /* cp Base; hellofoo; */
    d.print() /* hello */
    Derived d2 = d;
    /* cp Base; cp Derived; */
    Derived d2 = b; /* Error */
}

void passByVal(Base base) {
    base.str += "foo";
    base.print(); }
