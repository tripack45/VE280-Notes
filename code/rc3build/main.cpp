#include <iostream>
using namespace std;
extern int number[], size;
int reduce(int n[], int s);
int main() {
   for (int i=0; i<size; i++) cout << number[i] << " ";
   cout << "\nReduced to " << reduce(number,size) << endl;
}