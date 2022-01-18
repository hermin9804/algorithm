#include <bits/stdc++.h>
using namespace std;

typedef struct s_tower {
	int height;
	int cnt;
} t_tower;

stack<t_tower> s;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	long long ans = 0;
	while (n--) {
		t_tower cur;
		cin >> cur.height;
		cur.cnt = 1;
		while (!s.empty() && s.top().height <= cur.height) {
			ans += s.top().cnt;
			if (s.top().height == cur.height)
				cur.cnt += s.top().cnt;
			s.pop();
		}
		if (!s.empty())
			ans++;
		s.push(cur);
	}
	cout << ans;
}
