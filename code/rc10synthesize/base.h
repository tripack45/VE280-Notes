// base.h
class Base { 
    string str;
public: 
    Base() { cout << "default base\n"; }
    Base(const Base& other) { cout << "copy base\n"; }
};