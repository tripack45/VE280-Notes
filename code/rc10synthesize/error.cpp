// error.cpp
class Derived3 : public Base {
public: Derived3(const Derived3& d3) : Base(d3) {
            cout << "copy derived 3\n"; } };
class Derived4 : public Base {
public: Derived4() = default;
        Derived4(const Derived4& d4) {
            cout << "copy derived 4\n"; } };
int main() {
	Derived1 d3; Derived1 d3c(d3); /* Compile Error */
	Derived2 d4; Derived4 d2c(d4); /* dft base; cp d4 */}

