#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int t[102][102][102];
int dist[102][102][102];

int m, n, h;
int dx[6] = {0, 0, 1, 0, -1, 0};
int dy[6] = {0, 0, 0, 1, 0, -1};
int dz[6] = {-1, 1, 0, 0, 0, 0};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n >> h;
	queue<tuple<int, int, int> > Q;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> t[i][j][k];
				if (t[i][j][k] == 1) Q.push(make_tuple(i, j, k));
				if (t[i][j][k] == 0) dist[i][j][k] = -1; // 익지 않은 토마토의 경우 dist -1
			}
		}
	}
	while (!Q.empty()) {
		int a = get<0>(Q.front());
		int b = get<1>(Q.front());
		int c = get<2>(Q.front());
		Q.pop();
		for (int dir = 0; dir < 6; dir++) {
			int nz = dz[dir] + a;
			int nx = dx[dir] + b;
			int ny = dy[dir] + c;
			if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dist[nz][nx][ny] >= 0) continue;
			dist[nz][nx][ny] = dist[a][b][c] + 1;
			Q.push(make_tuple(nz, nx, ny));
		}
	}
	int day = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (dist[i][j][k] == -1) {
					cout << -1;
					return 0;
				}	
				day = max(day, dist[i][j][k]);
			}
		}
	}
	cout << day;
}
