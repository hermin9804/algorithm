#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const string& a, const string& b){
	if (a.length() != b.length()) return a.length() < b.length();
	int sum_a = 0, sum_b = 0;
	for (int i= 0; i < a.length(); i++) {
		if ('0'<= a[i] && a[i] <= '9') sum_a += a[i] - '0';
		if ('0'<= b[i] && b[i] <= '9') sum_b += b[i] - '0';
	}
	if (sum_a != sum_b) return sum_a < sum_b;
	return a < b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) cout << v[i] << '\n';
}
