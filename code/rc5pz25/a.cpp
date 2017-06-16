#include <iostream>
using namespace std;
int setFirst(x[][5], int size) {
    int cheese = 0;
    while (size >= 0) x[--size][0] = size;
    cout << cheese << endl;
}
int main() {
    int arr[10][5] = {0};
    setFirst(arr, 10);
}
