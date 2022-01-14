#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n ,k;
	cin >> n >> k;

	list<int> L;
	for (int i = 1; i <= n; i++) 
		L.push_back(i);
	cout << '<';
	for (int i = 1; !L.empty(); i++) {
		if (i % k == 0) {
			cout << L.front();
			L.pop_front();
			if (!L.empty())
				cout << ", ";
		}
		else {
			L.push_back(L.front());
			L.pop_front();
		}
	}
	cout << '>';
}
