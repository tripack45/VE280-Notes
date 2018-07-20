// ok.cpp
class Derived1 : public Base {};
class Derived2 : public Base {
public: Derived2() = default;
        Derived2(const Derived2& d2) : Base(d2) {
            cout << "copy derived 2\n"; } };
int main() {
    Derived1 d1; Derived1 d1c(d1); /* cp base */
    Derived2 d2; Derived2 d2c(d2); /* cp base; cp d2 */ }
