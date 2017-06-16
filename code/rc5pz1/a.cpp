#include <iostream>
using namespace std;
struct S{int x = 4; char a[4];};
void foo() {
    S s; cin >> s.a; 
    while(--s.x) cout << s.a << endl;
}
int main() {foo();}
