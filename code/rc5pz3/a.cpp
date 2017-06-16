#include <iostream>
using namespace std;
void secretFunction() {
    cout << "You shouldn't be here..." << endl;
}
void echo() { char buffer[20]; cin >> buffer; }
int main() { echo(); return 0; }