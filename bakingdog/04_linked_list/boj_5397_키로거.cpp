#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		list<char> L;
		string s;
		list<char>:: iterator cursor = L.begin();

		cin >> s;
		for (auto c: s) {
			if (c == '<') {
				if (cursor != L.begin())
					cursor--;
			}
			else if (c == '>') {
				if (cursor != L.end())
					cursor++;
			}
			else if (c == '-') {
				if (cursor !=L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else {
				L.insert(cursor, c);
			}
		}
		for (auto k : L) {
			cout << k;
		}
		cout << '\n';
	}
}
