#include <iostream>

using namespace std;

struct S {
	int x, y;
	int arr[3];
	double d;
};

int main() {
	int x[] = {1, 2, 4, 5, 6};
	S s{1, 2, {3, 4, 5}, 6.0};
	cout << s.x << " " << s.y << endl;
	cout << s.arr[0] << " " << s.arr[1] << " " << s.arr[2] << endl;
	cout << s.d << endl;
	S a[2] = {
		{1, 2, {3, 4, 5}, 6.0},
		{2, 3, {3, 4, 6}, 4.0}
	};
	return 0;
}
