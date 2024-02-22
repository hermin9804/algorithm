#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	stack<char> s;

	int sum = 0; // 누적해서 더해질 값
	int num = 1; // 곱해질 값

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			num *= 2;
			s.push(str[i]);
		} else if (str[i] == '[') {
			num *= 3;
			s.push(str[i]);
		} else if (str[i] == ')') {
			if (s.empty() || s.top() != '(') {
				cout << 0;
				return 0;
			}
			if (str[i-1] == '(') sum += num;
			s.pop();
			num /= 2;
		} else if (str[i] == ']') {
			if (s.empty() || s.top() != '[') {
				cout << 0;
				return 0;
			}
			if (str[i-1] == '[') sum += num;
			s.pop();
			num /= 3;
		}
	}
	if (s.empty()) cout << sum;
	else cout << 0;
	return 0;
}