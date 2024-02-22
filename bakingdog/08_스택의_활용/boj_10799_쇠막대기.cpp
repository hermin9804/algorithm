#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	stack<char> s;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		} else { // c == ')'
			s.pop();
			if (str[i-1] == '(') cnt += s.size();
			else cnt += 1;
		}
	}
	cout << cnt << '\n';
	return 0;
}