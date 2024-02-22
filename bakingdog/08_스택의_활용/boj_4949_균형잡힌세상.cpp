#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		string line;
		getline(cin, line);

		if (line == ".") break;

		stack<char> s;
		bool isvalid = true;
		for (int i = 0; i < line.length(); i++) {
			char c = line[i];
			if (c == '(' || c == '[') {
				s.push(c);
			} else if (c == ')') {
				if (s.empty() || s.top() != '(') {
					isvalid = false;
					break;
				}
				s.pop();
			} else if (c == ']') {
				if (s.empty() || s.top() != '[') {
					isvalid = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty()) isvalid = false;
		if (isvalid) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}