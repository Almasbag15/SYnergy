#include <iostream>
using namespace std;

template<typename T>
void swapp(T& x, T& y) {
	T c = x;
	x = y;
	y = c;
}

int main() {
	int a = 10;
	int b = 5;
	cout << a << " " << b << endl;
	swapp(a, b);
	cout << a << " " << b << endl;
}
