#include <iostream>
#include <queue>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int val) {
	dat[tail++] = val;
}

void pop() {
	head++;
}

int size() {
	return tail - head;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail-1];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int x;
			cin >> x;
			push(x);
		} else if (cmd == "pop") {
			if (size() == 0) cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop();
			}
		} else if (cmd == "size") {
			cout << size() << '\n';
		} else if (cmd == "empty") {
			if (size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		} else if (cmd == "front") {
			if (size() == 0) cout << -1 << '\n';
			else cout << front() << '\n';
		} else { //back
			if (size() == 0) cout << -1 << '\n';
			else cout << back() << '\n';
		}
	}
}