struct Qux {
 struct Baz {
  struct Bar {
   struct Foo {
     vtbl f() = Qux::f; 
     vtbl g() = Baz::g;
   }
  }
  vtbl h() = Qux::h
 }
}