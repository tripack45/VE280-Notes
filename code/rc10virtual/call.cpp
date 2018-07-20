Bar bar; bar.g(); // Bar::g
Qux qux; qux.g(); // Baz::g
Baz baz; baz.h(); // Baz::h
Foo& f1 = qux; f1.g(); 
// Baz::g
Bar& b1 = qux; b1.h(); 
// Bar::h
Baz& b2 = qux; b2.h(); 
// Qux::h
Bar* bar = &Quz; bar->h();
// ?
const Foo& cbar = Baz;
cbar.g(); // ?