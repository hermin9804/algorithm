#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push (int val) {
	dat[pos++] = val;
}

void pop() {
	pos--;
}

int top() {
	return dat[pos-1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	while (N--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			push(x);
		} else if (cmd == "pop") {
			if (pos == 0) cout << -1 << '\n';
			else {
				cout << top() << '\n';
				pop();
			}
		} else if (cmd == "size") {
			cout << pos << '\n';
		} else if (cmd == "empty") {
			if (pos == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		} else { // top
			if (pos == 0) cout << -1 << '\n';
			else cout << top() << '\n';
		}
	}
}