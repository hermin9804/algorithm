#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int n;
	list<char> L;

	cin >> s;	
	cin >> n;

	for (char c : s)
		L.push_back(c);

	list<char>::iterator cursor = L.end();


	for (int i = 0; i< n; i++) {
		char cmd;
		cin >> cmd;

		if (cmd == 'L') {
			if (L.begin() != cursor)
				cursor--;
		} else if (cmd == 'D') {
			if (L.end() != cursor)
				cursor++;
		} else if (cmd == 'B') {
			if (L.begin() != cursor) {
				cursor--;
				cursor = L.erase(cursor);
			}
		} else if (cmd == 'P') {
			char c;
			cin >> c;
			L.insert(cursor, c);
		}
	}

	for (auto i : L)
		cout << i;
}