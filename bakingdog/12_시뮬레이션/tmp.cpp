#include <iostream>
using namespace std;

// cc_dir
// 1: 0-상, 1-하, 2-좌, 3-우
// 2: 0-상하, 1-좌우
// 3: 0-상좌, 1-좌하, 2-하우, 3-우상
// 4: 0-우상좌, 1-상좌하, 2-좌하우, 3-하우상
// 5: 0 상하좌우

int n, m, cc_cnt;
int min_cnt = 1000000;
int init_map[10][10];
int map[10][10];
int cc[8];
int cc_dir[8];

struct Point {
	int x, y;
};
Point cc_points[8];


void copy_init_map() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[i][j] = init_map[i][j];
		}
	}
}

void print_up(int px, int py) {
	for (int y = py; y > -1; y--) {
		if (init_map[px][y] == 6) break;
		if (init_map[px][y] == 0) map[px][y] = -1;
	}
}
void print_down(int px, int py) {
	for (int y = py; y < m; y++) {
		if (init_map[px][y] == 6) break;
		if (init_map[px][y] == 0) map[px][y] = -1;
	}
}
void print_left(int px, int py) {
	for (int x = px; x > -1; x--) {
		if (init_map[x][py] == 6) break;
		if (init_map[x][py] == 0) map[x][py] = -1;
	}
}
void print_right(int px, int py) {
	for (int x = px; x < n; x++) {
		if (init_map[x][py] == 6) break;
		if (init_map[x][py] == 0) map[x][py] = -1;
	}
}

void print_map() {
	for (int i = 0; i < cc_cnt; i++) {
		Point p = cc_points[i];
		if (cc[i] == 1) {
			if (cc_dir[i] == 0) {
				print_up(p.x, p.y);
			} else if (cc_dir[i] == 1) {
				print_down(p.x, p.y);
			} else if (cc_dir[i] == 2) {
				print_left(p.x, p.y);
			} else if (cc_dir[i] == 3) {
				print_right(p.x, p.y);
			}
		} else if (cc[i] == 2) {
			if (cc_dir[i] == 0) {
				print_up(p.x, p.y);
				print_down(p.x, p.y);
			} else if (cc_dir[i] == 1) {
				print_left(p.x, p.y);
				print_right(p.x, p.y);
			}
		} else if (cc[i] == 3) {
			if (cc_dir[i] == 0) {
				print_up(p.x, p.y);
				print_left(p.x, p.y);
			} else if (cc_dir[i] == 1) {
				print_left(p.x, p.y);
				print_down(p.x, p.y);
			} else if (cc_dir[i] == 2) {
				print_down(p.x, p.y);
				print_right(p.x, p.y);
			} else if (cc_dir[i] == 3) {
				print_right(p.x, p.y);
				print_up(p.x, p.y);
			}
		} else if (cc[i] == 4) {
			if (cc_dir[i] == 0) {
				print_right(p.x, p.y);
				print_up(p.x, p.y);
				print_left(p.x, p.y);
			} else if (cc_dir[i] == 1) {
				print_up(p.x, p.y);
				print_left(p.x, p.y);
				print_down(p.x, p.y);
			} else if (cc_dir[i] == 2) {
				print_left(p.x, p.y);
				print_down(p.x, p.y);
				print_right(p.x, p.y);
			} else if (cc_dir[i] == 3) {
				print_down(p.x, p.y);
				print_right(p.x, p.y);
				print_up(p.x, p.y);
			}
		} else if (cc[i] == 5) {
			print_up(p.x, p.y);
			print_down(p.x, p.y);
			print_left(p.x, p.y);
			print_right(p.x, p.y);
		}
	}
}

int count_map() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0)
				cnt++;
		}
	}
	return cnt;
}

void func(int k) {
	if (k == cc_cnt) {
		copy_init_map();
		print_map();
		int cnt = count_map();
		min_cnt = min(min_cnt, cnt);
		return;
	}

	for (int j = 0; j < 4; j++) {
		cc_dir[k] = j;
		func(k+1);
	}
	cc_dir[k] = 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			init_map[i][j] = x;
			if (1 <= x && x <= 5) {
				cc[cc_cnt] = x;
				cc_points[cc_cnt].x = i;
				cc_points[cc_cnt].y = j;
				cc_cnt++;
			}

		}
	}
	func(0);
	cout << min_cnt;
	return;
}
