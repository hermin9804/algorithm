#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int n;
	cin >> s;
	cin >> n;
	list<char> L;
	for (char c : s)
		L.push_back(c);
	list<char>:: iterator cursor = L.end();
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (L.begin() != cursor)
				cursor--;
		}
		else if (c == 'D') {
			if (L.end() != cursor)
				cursor++;
		}
		else if (c == 'B') {
			if (L.begin() != cursor) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else if (c == 'P') {
			char t;
			cin >> t;
			L.insert(cursor, t);
		}
	}
	for (auto i : L)
		cout << i;
}
