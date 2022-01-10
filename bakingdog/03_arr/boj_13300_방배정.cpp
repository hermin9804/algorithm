#include <bits/stdc++.h>
using namespace std;

int s[2][7];
int n, k;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		s[a][b]++;
	}
	for (int i = 1; i < 7; i++) {
		ans += s[0][i] / k;
		if (s[0][i] % k) ++ans;
		ans += s[1][i] / k;
		if (s[1][i] % k) ++ans;
	}
	cout << ans;
}
