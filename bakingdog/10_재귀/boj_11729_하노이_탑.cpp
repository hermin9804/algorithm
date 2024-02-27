#include <iostream>
using namespace std;


// void func(int a, int b, int n) {
// 	if (n == 1) {
// 		cout << a << ' ' << b << '\n';
// 		return;
// 	}

// 	func(a, 6-a-b, n-1);
// 	cout << a << ' ' << b << '\n';
// 	func(6-a-b, b, n-1);
// }

void func(int n, int start, int to, int bypass) {
	if (n == 1) {
		cout << start << ' ' << to << '\n';
		return;
	}

	func(n-1, start, bypass, to)
	cout << start << ' ' << to << '\n';
	func(n-1, bypass, to, start);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << (1 << n) -1 << '\n';
	func(n, 1, 3, 2);
}

