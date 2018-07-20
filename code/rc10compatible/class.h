// class.h
class Base {
public: string str;
Base(const Base& base)
: str(base.str) {
    cout << "cp Base\n"; }
void print() {
    cout << a << endl; }
};
class Derived : public Base {
public: // ... 
Derived(const Derived& d)
: Base(d) {
    cout << "cp Derived\n"; }
};