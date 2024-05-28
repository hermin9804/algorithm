#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int board[501][501];
int vis[501][501];
int n, m;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int cnt = 0;
	int mx_size = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue;

			cnt++;
			queue<pair<int, int > >Q;
			vis[i][j] = 1;
			Q.push(make_pair(i, j));

			int size = 0;
			while(!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny > m) continue;
					if (board[nx][ny] == 0 || vis[nx][ny]) continue;

					vis[nx][ny] = 1;
					Q.push(make_pair(nx, ny));
				}
				size++;
			}
			mx_size = max(mx_size, size);
		}
	}
	cout << cnt << '\n';
	cout << mx_size << '\n';
	return 0;
}