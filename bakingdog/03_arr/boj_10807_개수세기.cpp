#include <bits/stdc++.h>
using namespace std;

int a[201];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0, t;
	cin >> n;
	while (n--)
	{
		cin >> t;
		t += 100;
		a[t]++;
	}
	cin >> t;
	t += 100;
	cout << a[t];
}
