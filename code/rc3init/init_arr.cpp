#include <iostream>

using namespace std;

int main() {
	int arr2[500];
	
	for (int i = 0; i < sizeof(arr2) / sizeof(*arr2); i++) {
		cout << arr2[i] << endl;
	}
}
