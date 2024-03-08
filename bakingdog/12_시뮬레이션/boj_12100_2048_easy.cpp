#include <iostream>
using namespace std;

int n, mx;
int init_board[21][21];
int board[21][21];
int tmp_board[21][21];
int merged[21][21];
int dir[5];

// dir
// 0 상
// 1 하
// 2 좌
// 3 우

void print_dir() {
	for (int i = 0; i < 5; i++)
		cout << dir[i] << ' ';
	cout << '\n';
}

void print_board() {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			cout << board[x][y] << "  ";
		}
		cout << '\n';
	}
	cout << '\n';
}

void copy_board() {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			board[x][y] = init_board[x][y];
			merged[x][y] = 0;
		}
	}
}

void up() {
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			for (int p = x + 1; p < n; p++) {
				if (board[x][y] == 0) {
					if (board[p][y] != 0) {
						board[x][y] = board[p][y];
						board[p][y] = 0;
						continue;
					}
				} else {
					if (board[x][y] == board[p][y]) {
						board[x][y] += board[p][y];
						board[p][y] = 0;
						break;
					}
				}
			}
		}
	}
}

void down() {
	for (int y = n-1; y >= 0; y--) {
		for (int x = n-1; x >= 0; x--) {
			for (int p = x - 1; p >= 0; p--) {
				if (board[x][y] == 0) {
					if (board[p][y] != 0) {
						board[x][y] = board[p][y];
						board[p][y] = 0;
						continue;
					}
				} else {
					if (board[x][y] == board[p][y]) {
						board[x][y] += board[p][y];
						board[p][y] = 0;
						break;
					}
				}
			}
		}
	}
}

void left() {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			for (int p = y + 1; p < n; p++) {
				if (board[x][y] == 0) {
					if (board[x][p] != 0) {
						board[x][y] = board[x][p];
						board[x][p] = 0;
						continue;
					}
				} else {
					if (board[x][y] == board[x][p]) {
						board[x][y] += board[x][p];
						board[x][p] = 0;
						break;
					}
				}
			}
		}
		print_board();
	}
	cout << "-----------------\n";
}

void right() {
	for (int x = n-1; x >= 0; x--) {
		for (int y = n-1; y >= 0; y--) {
			for (int p = y - 1; p >= 0; p--) {
				if (board[x][y] == 0) {
					if (board[x][p] != 0) {
						board[x][y] = board[x][p];
						board[x][p] = 0;
						continue;
					}
				} else {
					if (board[x][y] == board[x][p]) {
						board[x][y] += board[x][p];
						board[x][p] = 0;
						break;
					}
				}
			}
		}
	}
}

void move_dir() {
	for (int i = 0; i < 5; i++) {
		if (dir[i] == 0) {
			up();
		} else if (dir[i] == 1) {
			down();
		} else if (dir[i] == 2) {
			left();
		} else if (dir[i] == 3) {
			right();
		}
	}
}

void cnt_board() {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			mx = max(mx, board[x][y]);
		}
	}
}

void func(int k) {
	if (k == 4) {
		copy_board();
		move_dir();
		cnt_board();
		return;
	}

	for (int i = 0; i < 4; i++) {
		dir[k] = i;
		func(k + 1);
		dir[k] = 0;
	}
}


int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> init_board[i][j];
		}
	}
	func(0);
	cout << mx;
}