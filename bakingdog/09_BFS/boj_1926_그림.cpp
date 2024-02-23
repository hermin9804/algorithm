#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
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
	int num = 0; // 그림의 갯수
	int max_size = 0; // 그림의 최대 넓이

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue; // 그림이 아니거나, 이미 방문한경우 넘어감
			
			num++;
			queue<pair<int, int> > Q;
			vis[i][j] = 1;
			Q.push(make_pair(i, j));

			int size = 0;
			while (!Q.empty())  {
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < -1 || ny >= m ) continue;
					if (board[nx][ny] == 0 || vis[nx][ny]) continue;

					vis[nx][ny] = 1;
					Q.push(make_pair(nx, ny));
				}
				size++;
			}
			max_size = max(max_size, size);
		}
	}
	cout << num << '\n';
	cout << max_size << '\n';
	return 0;
}