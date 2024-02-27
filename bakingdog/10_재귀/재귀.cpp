#include <iostream>
using namespace std;

int func1(int n) {
	if (n == 0) return 0;
	cout << n << ' ';
	func1(n - 1);
}

int func2(int n) {
	if (n == 0) return 0;
	return n + func2(n - 1);
}

int main() {
	// func1(10);

	int sum = func2(10);
	cout << sum << '\n';

	cout << 9 / 2 << '\n';
	return 0;
}