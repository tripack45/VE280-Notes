// s.h
class S {
        static S* instance;
        S() {}                    // Constructor
    public:
        static S& getInstance() {
            if (instance == nullptr) instance = new S;
            return *s;
        }
        S(S const&)               = delete;
        S&   operator=(S const&)  = delete;
};
// s.cpp
S* S::instance = nullptr; // initialize
// foo.cpp
void foo() { S& s = S::getInstance(); /* Use s as you wish */}