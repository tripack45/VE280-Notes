class Base {
    private: int priv; void privMethod(); 
    public:  int pub;  void pubMethod(); };
class Derived : public Base {
    void bothError() { priv = 0; privMethod(); /* Error */ }
    void bothOK()    { pub = 0;  pubMethod();  /* OK    */ }
} derived;
void bothError() { derived.priv = 0; derived.privMethod(); }
void bothOK   () { derived.pub = 0;  derived.pubMethod(); }