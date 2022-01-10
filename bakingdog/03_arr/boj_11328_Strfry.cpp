#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s1, s2;
	while (n--) {
		int a[26] = {};
		cin >> s1 >> s2;

		for (int i = 0; i < s1.length(); i++) {
			a[s1[i] - 'a']++;
			a[s2[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++) {
			if (a[i] != 0) {
				cout << "Impossible\n";
				break;
			} else if (i == 25) {
				cout << "Possible\n";
			}
		}
	}
}
