#include <iostream>
#include <queue>
using namespace std;

bool vis[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >>n;

	queue<pair<int, int> > q;
	q.push(make_pair(n, 0));
	vis[n] = true;

	while(!q.empty()) {
		int cur = q.front().first;
		int step = q.front().second;

		q.pop();

		if (cur == 1) {
			cout << step;
			break;
		}

		if (cur % 3 == 0 && !vis[cur / 3]) {
			q.push(make_pair(cur / 3, step + 1));
			vis[cur / 3] = true;
		}
		if (cur % 2 == 0 && !vis[cur / 2]) {
			q.push(make_pair(cur / 2, step + 1));
			vis[cur / 2] = true;
		}
		if (!vis[cur - 1]) {
			q.push(make_pair(cur - 1, step + 1));
			vis[cur - 1] = true;
		}
	}
}