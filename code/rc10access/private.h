class Base { ... };
class Derived : private Base {
    void bothError() { priv = 0; privMethod(); /* Error */ }
    void bothOK()    { pub = 0;  pubMethod();  /* OK    */ }
} derived;
void test() {  
derived.priv = 0; /* Error */ derived.privMethod(); /* Error */
derived.pub = 0;  /* Error */ derived.pubMethod();  /* Error */
};