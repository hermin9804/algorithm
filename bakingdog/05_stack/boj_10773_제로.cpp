#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, n, sum = 0;
	cin >> k;
	stack<int> s;
	while (k--) {
		cin >> n;
		if (n == 0 && !s.empty())
			s.pop();
		else
			s.push(n);
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}
