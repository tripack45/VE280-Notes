// class.cpp
void test() {
    Derived d; d.a = "hello"; 
    d.print(); /* hello */ 
    Base* bp = &d; bp->a = "ha"; 
    d.print(); /* ha */
    bad(&d); d.print(); /* bad */
    good(d); d.print(); /* good */
    pbase(d); /* good */
}
void bad(Base* base) {
    base->a += "bad"; }
void good(Base& base) {
    base.a += "good"; }
void pbase(const Base& base) {
    base.print();}