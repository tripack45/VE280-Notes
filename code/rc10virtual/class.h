struct Foo {
    virtual void f() = 0;
    virtual void g() = 0; 
};
struct Bar : public Foo {
    void f() {};
    void g() {};
    void h() {}; 
};
struct Baz : public Bar {
    void    f() {};
    void    g() {};
    virtual void h() {}; };
struct Qux : public Baz {
    void f() {};
    void h() {}; };