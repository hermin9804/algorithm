#include <bits/stdc++.h>
using namespace std;

int a[2][26], ans;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;

	for (char c : s1) 
		a[0][c - 'a']++;

	for (char c : s2)
		a[1][c - 'a']++;

	for (int i = 0; i < 26; i++) 
			ans += abs(a[0][i] - a[1][i]);

	cout << ans;
}
