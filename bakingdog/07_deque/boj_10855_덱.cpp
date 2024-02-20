#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> DQ;
	int n;

	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;

		int x;
		if (cmd == "push_front") {
			cin >> x;
			DQ.push_front(x);
		} else if (cmd == "push_back") {
			cin >> x;
			DQ.push_back(x);
		} else if (cmd == "pop_front") {
			if (DQ.empty() == 1) cout << -1 << '\n';
			else {
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
		} else if (cmd == "pop_back") {
			if (DQ.empty() == 1) cout << -1 << '\n';
			else {
				cout << DQ.back() << '\n';
				DQ.pop_back();
			}
		} else if (cmd == "size") {
			cout << DQ.size() << '\n';
		} else if (cmd == "empty") {
			cout << DQ.empty() << '\n';
		} else if (cmd == "front") {
			if (DQ.empty() == 1) cout << -1 << '\n';
			else cout << DQ.front() << '\n';
		} else { // back
			if (DQ.empty() == 1) cout << -1 << '\n';
			else cout << DQ.back() << '\n';
		}
	}
}