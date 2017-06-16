#include <iostream>
using namespace std;
#include "file.h"
int foo() { 
    File f1("file1.in"); File f2("file2.in"); 
    cout << "I Returned!" << endl;
}
int main() { foo(); }